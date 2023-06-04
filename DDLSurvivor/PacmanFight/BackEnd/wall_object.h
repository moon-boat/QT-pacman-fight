#ifndef WALL_OBJECT_H
#define WALL_OBJECT_H

#include "gameabstractobject.h"
#include "wall.h"

class wall_object:public GameAbstractObject, public Wall
{
public:
    wall_object(const QPointF& _pos, const QRectF& _rec, const QString& icon_path);
};

#endif // WALL_OBJECT_H
