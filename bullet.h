#ifndef BULLET_H
#define BULLET_H

#include <QPointF>
#include "wall.h"

class Bullet
{
public:
    Bullet(QPointF _pos, qreal angle,int dura);
    //void advance(int phase) override;
    QPointF getPosition()const;
    int getdurability()const;
    qreal getAngle()const;
    void setexist(bool f1);
    void collideWithWall(const Wall* wall);


private:
    QPointF pos;
    qreal angle;
    int durability;
    bool exist;
};

#endif // BULLET_H

