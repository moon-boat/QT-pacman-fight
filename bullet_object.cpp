#include "bullet_object.h"

QRectF bullet_size{0,0,4,25};
QString bullet_path{":/images/resources/bullet.png"};

bullet_object::bullet_object(QPointF _pos,qreal _angle):GameAbstractObject(bullet_size, bullet_path, bullet, _pos, 0, 0),
    Bullet(_pos, _angle,5)
{

}
void bullet_object::set_angle(){
    GameAbstractObject::setDirection()=Bullet::getAngle();
}
void bullet_object::update(){
    updatePos(33);
}
