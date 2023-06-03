#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include <QList>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "settingpage.h"
#include "mainwindow.h"
#include "./BackEnd/gameabstractobject.h"
#include "./BackEnd/bean_object.h"
#include "./BackEnd/bullet_object.h"
#include "./BackEnd/pacman_object.h"
#include "./BackEnd/wall_object.h"

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

    void sceneUpdator();

private slots:
    void on_GameSettingButton_clicked();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void recQuitSign(bool a);
    void timeContinue();
    void BlueLabelTestTextSetting();
    void keySlotOut();
    void gameOver(int WinnerType);

private:
    Ui::Game *ui;
    MainWindow *returnTo;
    SettingPage *sp;
    QTimer *time, *keyTime;
    pacman_object *red, *blue;
    QGraphicsScene scene;
    QList<int> keys;
    long long globalTime;
    void JustClose();
};

#endif // GAME_H
