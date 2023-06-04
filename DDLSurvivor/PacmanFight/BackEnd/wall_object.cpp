#include "wall_object.h"

wall_object::wall_object(const QPointF& _pos, const QRectF& _rec, const QString& icon_path):
    GameAbstractObject(_rec, icon_path, wall,_pos),
    Wall(_rec, _pos)
{
    setZValue(1);
}

