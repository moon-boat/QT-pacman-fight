#ifndef GAMEABSTRACTOBJECT_H
#define GAMEABSTRACTOBJECT_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QRectF>
#include <QPainter>

class GameAbstractObject : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
private:
    QString icon_path;
    QRectF bounding;
    QPointF pos;
    qreal velocity, direction;

public:
    /*
     * @params:
     *  rec: bounding
     *  path: path of the picture file
     *  pos: initial position on the scene
     *  _v: initial velocity
     *  dir: initial facing direction
     *  parent: QGraphicsItem parent, default as nullptr
    */
    GameAbstractObject(const QRectF &rec, const QString &path, const QPointF &_pos = QPointF(0, 0), qreal _v = 0, qreal dir = 0, QGraphicsItem *parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    void updatePos(int frameUpdateSeconds);
};

#endif // GAMEABSTRACTOBJECT_H
