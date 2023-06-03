#include "bullet_object.h"

QRectF bullet_size{-25,-4,25,4};
QString bullet_path{":/images/resources/bullet.png"};

bullet_object::bullet_object(QPointF _pos,qreal _angle):
    GameAbstractObject(bullet_size, bullet_path, bullet, _pos, 0.5, _angle),
    Bullet(_pos, _angle, 5)
{
    setZValue(20);
}
void bullet_object::set_angle(){
    GameAbstractObject::setDirection() = Bullet::getAngle() * acos(-1) / 180;
}
void bullet_object::set_pos()
{
    Bullet::set_pos(GameAbstractObject::getPosition());
}
void bullet_object::update(){
    set_angle();
    updatePos(33);
    set_pos();
}
