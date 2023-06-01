#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "settingpage.h"
#include "mainwindow.h"
#include "gameabstractobject.h"

namespace Ui {
class Game;
}

class testBullet : public GameAbstractObject
{
private:

public:
    testBullet();
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
    QList<GameAbstractObject*> objInScene;
    QGraphicsScene scene;
    int globalTime;
    void JustClose();
};

#endif // GAME_H
