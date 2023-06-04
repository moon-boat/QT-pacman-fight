#include "wall_object.h"

QString wall_path_ver(":/images/resources/wall(1).png");
QString wall_path(":/images/resources/wall(1)(1).jpg");

wall_object::wall_object(const QPointF& _pos, const QRectF& _rec):
    GameAbstractObject(_rec, (_rec.width() > _rec.height() ? wall_path : wall_path_ver), wall,_pos),
    Wall(_rec, _pos)
{
    setZValue(1);
}

