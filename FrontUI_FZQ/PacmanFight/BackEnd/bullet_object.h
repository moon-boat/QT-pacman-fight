#ifndef BULLET_OBJECT_H
#define BULLET_OBJECT_H


#include "bullet.h"
#include "gameabstractobject.h"

class bullet_object:public GameAbstractObject ,public Bullet
{
public:
    bullet_object(QPointF _pos,qreal _angle);
    void set_angle();
    void update();
};


#endif // BULLET_OBJECT_H
