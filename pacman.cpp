#include <QGraphicsItem>
#include "bean.h"
#include "pacman.h"
#include "ghost.h"
#include "capsule.h"

Pacman::Pacman(): pos(0, 0)
{
    // 在构造函数中初始化 Pacman 对象的属性
    color=0;
    r= 0.0;
    gunAngle = 0.0;
    life = 10;
    score = 0;
}
Pacman::Pacman(int c,QPointF _pos,qreal radius,qreal gunangle,int l,int s)
    :color(c),pos(_pos),r(radius),gunAngle(gunangle),life(l),score(s)
{

}

bool Pacman::eatBean(const Bean* bean)
{
    qreal distance = QLineF(pos, bean->getPosition()).length();
    qreal sumOfRadii = r + bean->getRadius();
    bool res = distance <= sumOfRadii;
    if (res)
    {
        score += bean->getScore();
    }
    return res;
}

bool Pacman::getShot(const Bullet *bullet)
{
    bool res = QLineF(bullet->getPosition(), pos).length() <= r;
    if (res)
        life--;
    return res;
}

QPointF Pacman::getPosition() const
{
    return pos;
}

qreal Pacman::getGunAngle() const
{
    return gunAngle;
}
qreal Pacman::getR() const
{
    return r;
}
int Pacman::getLife() const
{
    return life;
}

int Pacman::getScore() const
{
    return score;
}
int Pacman::getColor() const
{
    return color;
}

void Pacman::setPosition(const QPointF& _pos)
{
    pos = _pos;
}

void Pacman::setGunAngle(qreal angle)
{
    this->gunAngle = angle;
}

void Pacman::setLife(int life)
{
    this->life = life;
}

void Pacman::setScore(int score)
{
    this->score = score;
}
bool Pacman::collideWithGhost(Ghost* ghost){
    qreal distance = QLineF(pos, ghost->getPosition()).length();
    qreal sumOfRadii = r + ghost->getR();
    bool res = distance <= sumOfRadii;
    if (res)
    {
        if(isInvincible){
            score+=10;
        }
        else life=0;
    }
    return res;
}
bool Pacman::eatCapsule(Capsule* capsule){
    qreal distance = QLineF(pos, capsule->getPosition()).length();
    qreal sumOfRadii = r + capsule->getR();
    bool res = distance <= sumOfRadii;
    if (res)
    {
        isInvincible=true;
    }
    return res;
}
bool Pacman::getIsInvincible()const
{
    return isInvincible;
}
void Pacman::setIsInvincible(bool f)
{
    isInvincible=f;
}
