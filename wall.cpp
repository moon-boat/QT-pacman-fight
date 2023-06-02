#include "wall.h"
#include <QPainter>

Wall::Wall(QRectF rec, qreal ang)
    : rect(rec), angle(ang)
{
}
QRectF Wall::getRect() const
{
    return rect;
}
qreal Wall::getangle()const{
    return angle;
}
