#ifndef GHOST_H
#define GHOST_H

#include <QObject>
#include <QPointF>
#include <QRectF>

class Ghost
{
public:
    Ghost(QPointF _pos,qreal radius);
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
