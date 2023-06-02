#ifndef WALL_H
#define WALL_H

#include <QGraphicsItem>

class Wall : public QGraphicsItem
{
public:
    Wall(qreal startX, qreal startY, qreal endX, qreal endY, qreal angle, QGraphicsItem *parent = nullptr);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    QPointF getstart()const;
    QPointF getend()const;
    qreal getangle()const;

private:
    QPointF start;
    QPointF end;
    qreal angle;
};

#endif // WALL_H

