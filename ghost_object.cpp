#include "ghost_object.h"
#include <QRandomGenerator>

#include <QTime>
#include <QtGlobal>

QRectF ghost_size{-30,-30,60,60};
int cnt=0;
int getRandom(int min,int max)
{
    srand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    int num = rand()%(max-min);
    qDebug()<<num+min;
    return num+min;
}
int max_cnt=getRandom(200,300);
int who_first=max_cnt%2;//0red1blue
QString ghost_path{":/images/resources/ghost.png"};

ghost_object::ghost_object(QPointF _pos,qreal _angle):
    GameAbstractObject(ghost_size, ghost_path, ghost, _pos, 0.03,_angle),
    Ghost(_pos, 30,_angle)
{
    setZValue(10);
}
qreal ghost_object::chooseAngle(QPointF red,QPointF blue){
    cnt++;
    if(cnt%max_cnt==0)who_first=1-who_first;
    if(who_first==0){
        if(red.x()==Ghost::getPosition().x())
            return (red.y()>Ghost::getPosition().y()?90:270);
        else {
            qreal theta=atan((red.y()-Ghost::getPosition().y())/(red.x()-Ghost::getPosition().x()))*180/acos(-1);
            if(red.x()>Ghost::getPosition().x()){
                if(theta<0)return 360-theta;
                else return theta;
            }
            else{
                return 180+theta;
            }
        }
    }
    else{
        if(blue.x()==Ghost::getPosition().x())
            return (blue.y()>Ghost::getPosition().y()?90:270);
        else {
            qreal theta=atan((blue.y()-Ghost::getPosition().y())/(blue.x()-Ghost::getPosition().x()))*180/acos(-1);
            if(blue.x()>Ghost::getPosition().x()){
                if(theta<0)return 360-theta;
                else return theta;
            }
            else{
                return 180+theta;
            }
        }
    }
}
void ghost_object::set_angle(QPointF red,QPointF blue){
    //int randomAngle = QRandomGenerator::global()->bounded(360);
    GameAbstractObject::setDirection() = chooseAngle(red,blue) * acos(-1) / 180;
    Ghost::setAngle(chooseAngle(red,blue));
}
void ghost_object::set_pos()
{
    Ghost::setPosition(GameAbstractObject::getPosition());
}
void ghost_object::update(QPointF red,QPointF blue){
    set_angle(red,blue);
    updatePos(33);
    set_pos();
}
