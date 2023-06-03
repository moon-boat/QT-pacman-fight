#include "ghost_object.h"
#include <QRandomGenerator>

QRectF ghost_size{-30,-30,60,60};
QString ghost_path{":/images/resources/ghost.png"};

ghost_object::ghost_object(QPointF _pos,qreal _angle):
    GameAbstractObject(ghost_size, ghost_path, ghost, _pos, 0.03,_angle),
    Ghost(_pos, 30,_angle)
{
    setZValue(10);
}
void ghost_object::set_angle(){
    int randomAngle = QRandomGenerator::global()->bounded(360);
    GameAbstractObject::setDirection() = randomAngle * acos(-1) / 180;
    Ghost::setAngle(randomAngle);
}
void ghost_object::set_pos()
{
    Ghost::setPosition(GameAbstractObject::getPosition());
}
void ghost_object::update(){
    set_angle();
    updatePos(33);
    set_pos();
}
