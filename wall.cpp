#include "wall.h"
#include <QPainter>

Wall::Wall(qreal startX, qreal startY, qreal endX, qreal endY, qreal angle, QGraphicsItem *parent)
    : QGraphicsItem(parent), start(startX, startY), end(endX, endY), angle(angle)
{
}

QRectF Wall::boundingRect() const
{
    return QRectF(start, end);
}

void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
QPointF Wall::getstart()const{
    return start;
}
QPointF Wall::getend()const{
    return end;
}
qreal Wall::getangle()const{
    return angle;
}
