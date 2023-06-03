#ifndef CAPSULE_H
#define CAPSULE_H

#include <QObject>
#include <QPointF>
#include <QRectF>

class Capsule
{
public:
    Capsule(QPointF _pos,qreal radius);
    QPointF getPosition();
    qreal getR();
    void setPosition(const QPointF& position);
    void setR(qreal radius);
    //void setAngle(qreal ang);
private:
    QPointF pos;
    qreal r;
};

#endif // GHOST_H
