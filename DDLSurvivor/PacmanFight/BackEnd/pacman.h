#ifndef PACMAN_H
#define PACMAN_H

#include <QPointF>
#include "bean.h"
#include "bullet.h"

class Pacman
{
public:
    Pacman();
    Pacman(int c, QPointF _pos, qreal radius, qreal gunangle, int l, int s);

    bool eatBean(const Bean* bean);
    bool getShot(const Bullet* bullet);

    QPointF getPosition() const;
    qreal getR() const;
    qreal getGunAngle() const;
    int getLife() const;
    int getScore() const;
    int getColor() const;

    void setPosition(const QPointF& _pos);
    void setR(qreal r);
    void setGunAngle(qreal angle);
    void setLife(int life);
    void setScore(int score);

private:
    int color;
    QPointF pos;
    qreal r;
    qreal gunAngle;
    int life;
    int score;
};

#endif // PACMAN_H
