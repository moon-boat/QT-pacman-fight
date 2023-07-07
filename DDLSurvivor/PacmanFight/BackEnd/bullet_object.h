#ifndef BULLET_OBJECT_H
#define BULLET_OBJECT_H


#include "bullet.h"
#include "gameabstractobject.h"

class bullet_object: public GameAbstractObject, public Bullet
{
public:
    bullet_object(const QPointF& _pos,qreal _angle);
    void set_pos();
    void set_angle();
    void update();
};


#endif // BULLET_OBJECT_H
