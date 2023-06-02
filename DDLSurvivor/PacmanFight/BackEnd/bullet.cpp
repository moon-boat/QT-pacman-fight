#include "bullet.h"

Bullet::Bullet(QPointF _pos, qreal angle,int dura)
    : pos(_pos), angle(angle),durability(dura)
{
//    setFlag(ItemIsMovable);
//    setFlag(ItemIsSelectable);
}

QPointF Bullet::getPosition()const{
return pos;
}
int Bullet::getdurability()const{
    return durability;
}
//void Bullet::advance(int phase)
//{
//    if (!phase) {
//        // 计算子弹的移动逻辑
//        qreal dx = qCos(angle) * 5; // 子弹在 x 方向上的移动距离
//        qreal dy = qSin(angle) * 5; // 子弹在 y 方向上的移动距离
//        x += dx;
//        y += dy;
//        setPos(x, y);
//    }
//}
void Bullet::setexist(bool f1){
    exist=f1;
}
void Bullet::collideWithWall(const Wall* wall){
    if(wall->getRect().contains(pos))
    {
        angle= 2 * wall->getangle() - angle;
        durability-=1;
        if(durability<=0)exist=false;
    }
}
qreal getAngle()const{
    return angle;
}

