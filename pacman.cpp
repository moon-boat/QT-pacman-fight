#include <QGraphicsItem>
#include "bean.h"
#include "pacman.h"

//class Pacman : public QGraphicsItem
//{
//public:
//    Pacman();
//    Pacman(int c,qreal X,qreal Y,qreal radius,qreal gunangle,int l,int s,QGraphicsItem *parent);
//    QRectF boundingRect() const override;
//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
//    bool eatBean(const Bean& bean);


//    qreal getX() const;
//    qreal getY() const;
//    qreal getR()const;
//    qreal getGunAngle() const;
//    int getLife() const;
//    int getScore() const;

//    void setX(qreal x);
//    void setY(qreal y);
//    void setR(qreal r);
//    void setGunAngle(qreal angle);
//    void setLife(int life);
//    void setScore(int score);

//private:
//    int color;
//    qreal x;
//    qreal y;
//    qreal r;
//    qreal gunAngle;
//    int life;
//    int score;
//};

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
    QPointF pacmanCenter(pos);
    QPointF beanCenter = bean->getPosition();
    qreal distance = QLineF(pacmanCenter, beanCenter).length();
    qreal sumOfRadii = r + bean->getRadius();
    return distance <= sumOfRadii;
}
QPointF Pacman::getPosition() const
{
    return pos;
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

