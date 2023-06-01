#ifndef GAMEABSTRACTOBJECT_H
#define GAMEABSTRACTOBJECT_H

#include <QObject>
#include <QGraphicsItem>
#include <QRectF>
#include <QPainter>

class GameAbstractObject : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
private:
    QString icon_path;
    QRectF bounding;

public:
    GameAbstractObject(const QRectF &rec, const QString &path, QGraphicsItem *parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
};

#endif // GAMEABSTRACTOBJECT_H
