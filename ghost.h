#ifndef GHOST_H
#define GHOST_H

#include <QObject>
#include <QPointF>
#include <QRectF>

class Ghost
{
public:
    Ghost(QPointF _pos,qreal radius,qreal ang);
    QPointF getPosition();
    qreal getR();
    qreal getAngle();
    void setPosition(const QPointF& position);
    void setR(qreal radius);
    void setAngle(qreal ang);
private:
    QPointF pos;
    qreal r;
    qreal angle;
};

#endif // GHOST_H
