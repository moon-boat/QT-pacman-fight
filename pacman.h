#ifndef PACMAN_H
#define PACMAN_H

#include <QGraphicsItem>
#include "bean.h"
#include "bullet.h"
#include "ghost.h"
#include "capsule.h"

class Pacman
{
public:
    Pacman();
    Pacman(int c,qreal X,qreal Y,qreal radius,qreal gunangle,int l,int s);

    bool eatBean(Bean* bean);
    bool getShot(Bullet* bullet);
    bool collideWithGhost(Ghost* ghost);
    bool Pacman::eatCapsule(Capsule* capsule);

    qreal getX() const;
    qreal getY() const;
    qreal getR() const;
    qreal getGunAngle() const;
    int getLife() const;
    int getScore() const;
    bool getIsInvincible()const;

    void setX(qreal x);
    void setY(qreal y);
    void setR(qreal r);
    void setGunAngle(qreal angle);
    void setLife(int life);
    void setScore(int score);
    void setIsInvincible(bool f);

private:
    int color;
    qreal x;
    qreal y;
    qreal r;
    qreal gunAngle;
    int life;
    int score;
    bool isInvincible;
};

#endif // PACMAN_H
