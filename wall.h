#ifndef WALL_H
#define WALL_H

#include <QRectF>

class Wall
{
public:
    Wall(QRectF rec, qreal ang);

    QRectF getRect() const;
    qreal getangle()const;

private:
    QRectF rect;
    qreal angle;
};

#endif // WALL_H

