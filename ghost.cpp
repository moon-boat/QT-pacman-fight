#include "ghost.h"

Ghost::Ghost(QPointF _pos,qreal radius):pos(_pos),r(radius)
{
}
QPointF Ghost::getPosition(){
    return pos;
}
qreal Ghost::getR(){
    return r;
}
void Ghost::setPosition(const QPointF& position){
    pos=position;
}
void Ghost::setR(qreal radius){
    r=radius;
}
