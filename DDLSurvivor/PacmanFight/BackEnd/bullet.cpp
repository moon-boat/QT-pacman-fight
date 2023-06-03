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
        qreal dx = cos(angle * acos(-1) / 180), dy = sin(angle * acos(-1) / 180);
        if (dx == 0)
            angle = - angle;
        else if (dy == 0)
            angle = 180 - angle;
        else
        {
            qreal tarHorizon = (dy > 0 ? bounding.bottom() : bounding.top());
            qreal tarHoriX = (pos.y() - tarHorizon) * dx / dy + pos.x();
            qreal left = bounding.left(), right = bounding.right();
            bool collideWithHorizonal = ((tarHoriX >= left and tarHoriX <= right) ? true : false);
            qDebug() << tarHorizon << " " << dx << dy << pos.x() << tarHoriX << " " << left << " " << right << "\n";
            angle = 2 * (collideWithHorizonal ? 0 : 90) - angle;
        }
        durability -= 1;
        if (durability <= 0)
            exist = false;
    }
}
qreal Bullet::getAngle() const{
    return angle;
}

