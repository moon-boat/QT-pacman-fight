#include "gameabstractobject.h"

GameAbstractObject::GameAbstractObject(const QRectF &rec, const QString &path, QGraphicsItem *parent): QGraphicsItem(parent), icon_path(path)
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
    painter->drawImage(bounding, QImage(icon_path));
}
