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
public:
    testBullet();
    void update();
};

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr, QWidget *main = nullptr);
    ~Game();

    void timeCounter();

private slots:
    void on_GameSettingButton_clicked();
    void keyPressEvent(QKeyEvent *event);
    void recQuitSign(bool a);
    void timeContinue();
    void BlueLabelTestTextSetting();

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
