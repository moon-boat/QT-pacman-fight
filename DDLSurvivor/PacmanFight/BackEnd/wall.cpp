#include "wall.h"
#include <QPainter>

Wall::Wall(QRectF rec, QPointF _pos)
    : pos(_pos), rect(rec)
{
}
QRectF Wall::getRect() const
{
    return rect;
}

QPointF Wall::getPos() const
{
    return pos;
}
