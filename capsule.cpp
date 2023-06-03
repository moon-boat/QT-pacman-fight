#include "capsule.h"

Capsule::Capsule(QPointF _pos,qreal radius):pos(_pos),r(radius)
{
}
QPointF Capsule::getPosition(){
    return pos;
}
qreal Capsule::getR(){
    return r;
}
void Capsule::setPosition(const QPointF& position){
    pos=position;
}
void Capsule::setR(qreal radius){
    r=radius;
}
