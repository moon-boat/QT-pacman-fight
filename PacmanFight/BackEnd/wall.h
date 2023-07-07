#ifndef WALL_H
#define WALL_H

#include <QRectF>

class Wall
{
public:
    Wall(QRectF rec, QPointF _pos);

    QRectF getRect() const;
    QPointF getPos() const;

private:
    QPointF pos;
    QRectF rect;
};

#endif // WALL_H

