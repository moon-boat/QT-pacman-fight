#include "ghost.h"

Ghost::Ghost(QPointF _pos,qreal radius,qreal ang):pos(_pos),r(radius),angle(ang)
{
}
QPointF Ghost::getPosition(){
    return pos;
}
qreal Ghost::getR(){
    return r;
}
qreal Ghost::getAngle(){
    return angle;
}
void Ghost::setPosition(const QPointF& position){
    pos=position;
}
void Ghost::setR(qreal radius){
    r=radius;
}
void Ghost::setAngle(qreal radius){
    r=radius;
}

