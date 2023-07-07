#ifndef GHOST_OBJECT_H
#define GHOST_OBJECT_H


#include "ghost.h"
#include "gameabstractobject.h"

class ghost_object: public GameAbstractObject, public Ghost
{
public:
    ghost_object(const QPointF& _pos,qreal _angle);
    qreal chooseAngle(const QPointF& red, const QPointF& blue);
    void set_pos();
    void set_angle(const QPointF& red, const QPointF& blue);

public slots:
    void update(const QPointF& red, const QPointF& blue);
};


#endif // BULLET_OBJECT_H
