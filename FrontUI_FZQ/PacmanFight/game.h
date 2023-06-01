#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "settingpage.h"
#include "mainwindow.h"

namespace Ui {
class Game;
}

class testBullet : public QGraphicsItem
{
private:
    QString icon_path = ":/images/resources/bullet.png";
public:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
};

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr, QWidget *main = nullptr);
    ~Game();

    void recQuitSign(bool a);
    void timeCounter();

private slots:
    void on_GameSettingButton_clicked();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::Game *ui;
    MainWindow *returnTo;
    SettingPage *sp;
    QTimer *time;
    QGraphicsScene scene;
    int globalTime;
    void JustClose();
};

#endif // GAME_H
