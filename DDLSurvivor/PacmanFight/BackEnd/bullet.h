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
    bool isExist()const;
    qreal getAngle()const;
    void set_pos(const QPointF &_pos);
    void setexist(bool f1);
    void collideWithWall(const Wall* wall);


private:
    QPointF pos;
    qreal angle;
    int durability;
    bool exist;
};

#endif // BULLET_H

