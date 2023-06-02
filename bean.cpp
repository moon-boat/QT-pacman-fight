#include "bean.h"
#include <QPainter>

Bean::Bean(BeanType type, int radius,qreal X,qreal Y,int score, QGraphicsItem *parent)
    : QGraphicsItem(parent), type(type), radius(radius), score(score),x(X),y(Y)
{
    setFlag(ItemIsSelectable);
}

QRectF Bean::boundingRect() const
{
    return QRectF(-radius, -radius, 2 * radius, 2 * radius);
}

void Bean::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option)
    Q_UNUSED(widget)

    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}

int Bean::getRadius() const
{
    return radius;
}

int Bean::getScore() const
{
    return score;
}
qreal Bean::getx()const
{
    return x;
}
qreal Bean::gety()const
{
    return y;
}
QPointF Bean::getPosition()const
{
    return QPointF(x,y);
}
BeanType Bean::getType() const
{
    return type;
}

void Bean::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)
    // 豆子被点击时，发出信号通知 Pacman
    emit clicked(this);
}

