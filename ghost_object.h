#ifndef GHOST_OBJECT_H
#define GHOST_OBJECT_H


#include "ghost.h"
#include "gameabstractobject.h"

class ghost_object: public GameAbstractObject, public Ghost
{
public:
    ghost_object(QPointF _pos,qreal _angle);
    qreal chooseAngle(QPointF red,QPointF blue);
    void set_pos();
    void set_angle(QPointF red,QPointF blue);

public slots:
    void update(QPointF red,QPointF blue);
};


#endif // BULLET_OBJECT_H
