#include <QGraphicsItem>
#include "bean.h"
#include "pacman.h"
#include "bullet.h"
#include "ghost.h"
#include "capsule.h"

Pacman::Pacman()
{
    // 在构造函数中初始化 Pacman 对象的属性
    color=0;
    x = 0.0;
    y = 0.0;
    r= 0.0;
    gunAngle = 0.0;
    life = 10;
    score = 0;
    isInvincible=false;
}
Pacman::Pacman(int c,qreal X,qreal Y,qreal radius,qreal gunangle,int l,int s)
    :color(c),x(X),y(Y),r(radius),gunAngle(gunangle),life(l),score(s),isInvincible(false)
{
}
bool Pacman::eatBean(Bean* bean)
{
    QPointF pacmanCenter(x, y);
    QPointF beanCenter = bean->getPosition();
    qreal distance = QLineF(pacmanCenter, beanCenter).length();
    qreal sumOfRadii = r + bean->getRadius();
    if(distance<=sumOfRadii){
        bean->setexist(false);//豆子被吃了，就不存在了
    }
    return distance <= sumOfRadii;
}
bool Pacman::getShot(Bullet* bullet){
    QPointF pacmanCenter(x, y);
    QPointF bulletCenter=bullet->getPosition();
    qreal distance = QLineF(pacmanCenter, bulletCenter).length();
    if(distance<=r){
        bullet->setexist(false);//子弹击中了，就不存在了
        life-=10;
    }
    return distance <= r;
}
bool Pacman::collideWithGhost(Ghost* ghost){
    QPointF pacmanCenter(x, y);
    QPointF ghostCenter = ghost->getPosition();
    qreal distance = QLineF(pacmanCenter, ghostCenter).length();
    qreal sumOfRadii = r + ghost->getR();
    return distance <= sumOfRadii;
}
bool Pacman::eatCapsule(Capsule* capsule){
    QPointF pacmanCenter(x, y);
    QPointF capsuleCenter = capsule->getPosition();
    qreal distance = QLineF(pacmanCenter, capsuleCenter).length();
    qreal sumOfRadii = r + capsule->getR();
    return distance <= sumOfRadii;
}
qreal Pacman::getX() const
{
    return x;
}

qreal Pacman::getY() const
{
    return y;
}

qreal Pacman::getGunAngle() const
{
    return gunAngle;
}

int Pacman::getLife() const
{
    return life;
}

int Pacman::getScore() const
{
    return score;
}
bool Pacman::getIsInvincible()const
{
    return isInvincible;
}
void Pacman::setX(qreal x)
{
    this->x = x;
}

void Pacman::setY(qreal y)
{
    this->y = y;
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
void Pacman::setIsInvincible(bool f)
{
    isInvincible=f;
}
