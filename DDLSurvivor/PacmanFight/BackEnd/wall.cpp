#include "wall.h"
#include <QPainter>

Wall::Wall(QRectF rec, QPointF _pos)
    : rect(rec), pos(_pos)
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
