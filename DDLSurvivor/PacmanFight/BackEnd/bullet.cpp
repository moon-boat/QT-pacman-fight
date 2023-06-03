#include "bullet.h"

Bullet::Bullet(QPointF _pos, qreal angle,int dura)
    : pos(_pos), angle(angle),durability(dura), exist(true)
{
//    setFlag(ItemIsMovable);
//    setFlag(ItemIsSelectable);
}

QPointF Bullet::getPosition()const{
return pos;
}
bool Bullet::isExist()const{
    return exist;
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
void Bullet::set_pos(const QPointF &_pos)
{
    pos = _pos;
}
void Bullet::collideWithWall(const Wall* wall){
    QRectF bounding = wall->getRect();
    bounding.moveTo(wall->getPos());
    if (bounding.contains(pos))
    {
        qreal top = bounding.top(), bottom = bounding.bottom(), left = bounding.left(), right = bounding.right();
        qreal dis[4] {top - pos.y(), pos.y() - bottom, pos.x() - left, right - pos.x()};
        qreal closest = *std::min_element(dis, dis + 4);
        bool collideWithVertical = closest == dis[0] or closest == dis[1];
        angle = 2 * (collideWithVertical ? 0 : 90) - angle;
        durability -= 1;
        if (durability <= 0)
            exist = false;
    }
}
qreal Bullet::getAngle() const{
    return angle;
}

