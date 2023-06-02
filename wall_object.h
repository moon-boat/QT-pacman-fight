#ifndef WALL_OBJECT_H
#define WALL_OBJECT_H

#include "gameabstractobject.h"
#include "wall.h"
class wall_object:public GameAbstractObject ,public Wall
{
public:
    wall_object(QPointF _pos,QRectF _rec,qreal _angle);
};

#endif // WALL_OBJECT_H
