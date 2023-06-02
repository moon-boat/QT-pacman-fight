#ifndef BEAN_H
#define BEAN_H

#include <QGraphicsItem>
#include <QPainter>

enum class BeanType {
    Large,
    Medium,
    Small
};

class Bean : public QGraphicsItem
{
public:
    explicit Bean(BeanType type, int radius,qreal X,qreal Y,int score, QGraphicsItem *parent = nullptr);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    int getRadius() const;
    int getScore() const;
    qreal getx()const;
    qreal gety()const;
    QPointF getPosition()const;
    BeanType getType() const;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

private:
    BeanType type;
    int radius;
    int score;
    qreal x;
    qreal y;
};

#endif // BEAN_H
