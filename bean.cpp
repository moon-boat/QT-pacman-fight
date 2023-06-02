#include "bean.h"
#include <QPainter>

int scores[3] {5, 3, 1};
int _radius[3] {20, 10, 5};

Bean::Bean(BeanType _type, QPointF _pos)
    : type(_type), radius(_radius[int(_type)]), pos(_pos)
{
}
int Bean::getRadius() const
{
    return radius;
}

int Bean::getScore() const
{
    return scores[(int)type];
}
QPointF Bean::getPosition()const
{
    return pos;
}
BeanType Bean::getType() const
{
    return type;
}

