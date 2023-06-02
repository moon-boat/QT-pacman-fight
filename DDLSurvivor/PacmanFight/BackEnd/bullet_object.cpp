#include "bullet_object.h"

QRectF bullet_size{0,0,25,4};
QString bullet_path{":/images/resources/bullet.png"};

bullet_object::bullet_object(QPointF _pos,qreal _angle):
    GameAbstractObject(bullet_size, bullet_path, bullet, _pos, 0.3, _angle),
    Bullet(_pos, _angle, 5)
{

}
void bullet_object::set_angle(){
    GameAbstractObject::setDirection() = Bullet::getAngle() * acos(-1) / 180;
}
void bullet_object::set_pos()
{
    Bullet::set_pos(GameAbstractObject::getPosition());
}
void bullet_object::update(){
    updatePos(33);
}
