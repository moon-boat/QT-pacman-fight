#ifndef BEAN_H
#define BEAN_H

#include <QPointF>

enum BeanType {
    Large,
    Medium,
    Small
};

class Bean
{
public:
    explicit Bean(BeanType _type, QPointF _pos);

    int getRadius() const;
    int getScore() const;
    QPointF getPosition()const;
    BeanType getType() const;

protected:

private:
    BeanType type;
    int radius;
    QPointF pos;
};

#endif // BEAN_H
