#include "pacman_object.h"
#include "gameabstractobject.h"

QRectF pacman_size {0,0,60,60};
QString pacman_path[2]{":/images/resources/pacman_first.png",":/images/resources/pacman_second.png"};
QPointF pacman_point[2]{{200,200},{800,600}};
pacman_object::pacman_object(int type): GameAbstractObject(pacman_size, pacman_path[type], pacman, pacman_point[type], 0, 0),
    Pacman(type,pacman_point[type],30,0,10,0)
{

}
void pacman_object::setPosition(const QPointF& _pos){
    Pacman::setPosition(_pos);
    GameAbstractObject::setPosition() = _pos;
}
void pacman_object::set_angle(qreal _angle){
    Pacman::setGunAngle(_angle);
    GameAbstractObject::setDirection() = _angle*acos(-1)/180;
}
