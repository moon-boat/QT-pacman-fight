#include "wall_object.h"

QString wall_path(":/images/resources/wall.png");

wall_object::wall_object(QPointF _pos,QRectF _rec,qreal _angle):Wall(_rec, _angle),
    GameAbstractObject(_rec, wall_path, wall,_pos, 0, _angle)
{

}

