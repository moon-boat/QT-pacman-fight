#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsItem>
#include <QPainter>
#include <wall.h>

class Bullet : public QGraphicsItem
{
public:
    Bullet(qreal x, qreal y, qreal angle,int dura);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    //void advance(int phase) override;
    QPointF getPosition()const;
    int getdurability()const;
    void setexist(bool f1);
    void collideWithWall(const Wall* wall);

private:
    qreal x;
    qreal y;
    qreal angle;
    int durability;
    bool exist;
};

#endif // BULLET_H

