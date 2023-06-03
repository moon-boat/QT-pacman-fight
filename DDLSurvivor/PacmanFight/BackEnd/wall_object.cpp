#include "wall_object.h"

QString wall_path(":/images/resources/wall(1).png");

wall_object::wall_object(QPointF _pos,QRectF _rec):
    GameAbstractObject(_rec, wall_path, wall,_pos),
    Wall(_rec, _pos)
{
    setZValue(1);
}

