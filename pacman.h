#ifndef PACMAN_H
#define PACMAN_H

#include <QGraphicsItem>
#include<bean.h>

class Pacman : public QGraphicsItem
{
public:
    Pacman();
    Pacman(int c,qreal X,qreal Y,qreal radius,qreal gunangle,int l,int s,QGraphicsItem *parent);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    bool eatBean(const Bean& bean);

    qreal getX() const;
    qreal getY() const;
    qreal getR() const;
    qreal getGunAngle() const;
    int getLife() const;
    int getScore() const;

    void setX(qreal x);
    void setY(qreal y);
    void setR(qreal r);
    void setGunAngle(qreal angle);
    void setLife(int life);
    void setScore(int score);

private:
    int color;
    qreal x;
    qreal y;
    qreal r;
    qreal gunAngle;
    int life;
    int score;
};

#endif // PACMAN_H
