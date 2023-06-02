#include "bullet.h"

Bullet::Bullet(qreal x, qreal y, qreal angle,int dura)
    : x(x), y(y), angle(angle),durability(dura)
{
//    setFlag(ItemIsMovable);
//    setFlag(ItemIsSelectable);
}

QRectF Bullet::boundingRect() const
{
    return QRectF(-1, -1, 2, 2); // 设置子弹的包围矩形(不用管它）
}

void Bullet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setBrush(Qt::black); // 设置子弹的颜色
    //painter->drawEllipse(-1, -1, 2, 2); // 绘制子弹的圆形形状
}
QPointF Bullet::getPosition()const{
    return QPointF(x,y);
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
    qreal angl=wall->getangle();
    if(angl==0){
        if(y==wall->getstart().y()){
            if(x>=wall->getstart().x() && x<=wall->getend().x()){
                angle=-angle;
                durability-=1;
                if(durability<=0)exist=false;
            }
        }
    }
    else if(angl==90){
        if(x==wall->getstart().x()){
            if(y>=wall->getstart().y() && y<=wall->getend().x()){
                angle=2*90-angle;
                durability-=1;
                if(durability<=0)exist=false;
            }
        }
    }
}
