#include "gameabstractobject.h"

GameAbstractObject::GameAbstractObject(const QRectF &rec, const QString &path, ObjectType tp, const QPointF &_pos, qreal _v, qreal dir, QGraphicsItem *parent):
    QGraphicsItem(parent),
    icon_path(path),
    pos(_pos),
    velocity(_v),
    direction(dir * acos(-1) / 180),
    type(tp)
{
    qreal penWidth = 1;
    bounding = QRectF(rec.x() - penWidth / 2, rec.y() - penWidth / 2, rec.width() + penWidth, rec.height() + penWidth);
}

QRectF GameAbstractObject::boundingRect() const
{
    return bounding;
}

void GameAbstractObject::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->resetTransform();
    painter->translate(pos.x(), pos.y());
    painter->rotate(direction * 180 / acos(-1));
    painter->drawImage(bounding, QImage(icon_path));
    painter->resetTransform();
}

void GameAbstractObject::updatePos(int frameUpdateSeconds)
{
    pos.rx() += velocity * frameUpdateSeconds * cos(direction);
    pos.ry() += velocity * frameUpdateSeconds * sin(direction);
    QRectF bounding = scene()->sceneRect();
    QPointF newPos(pos.x(), pos.y());
    if (!bounding.contains(newPos))
    {
        scene()->removeItem(this);
        delete this;
    }
    else
        setPos(newPos);
}

QPointF& GameAbstractObject::setPosition()
{
    return pos;
}

qreal& GameAbstractObject::setDirection()
{
    return direction;
}

QPointF GameAbstractObject::getPosition() const
{
    return pos;
}
