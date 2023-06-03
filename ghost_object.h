#ifndef GHOST_OBJECT_H
#define GHOST_OBJECT_H


#include "ghost.h"
#include "gameabstractobject.h"

class ghost_object: public GameAbstractObject, public Ghost
{
public:
    ghost_object(QPointF _pos,qreal _angle);
    void set_pos();
    void set_angle();
    void update();
};


#endif // BULLET_OBJECT_H
