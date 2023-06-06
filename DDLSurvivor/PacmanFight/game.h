#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include <QList>
#include <QPointF>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <ctime>
#include "settingpage.h"
#include "mainwindow.h"
#include "./BackEnd/gameabstractobject.h"
#include "./BackEnd/bean_object.h"
#include "./BackEnd/bullet_object.h"
#include "./BackEnd/pacman_object.h"
#include "./BackEnd/wall_object.h"
#include "./BackEnd/ghost_object.h"
#include "gameoverwidget.h"
#include "setting.h"
#include <QThread>

class SceneThread: public QThread
{
    Q_OBJECT
public:
    explicit SceneThread(QObject *parent, const GameAbstractObject *ob, const QGraphicsScene* QGS)
        : QThread(parent),
        GAOb(ob),
        scene(QGS)
    {}
    ~SceneThread()
    {
        requestInterruption();
        quit();
        wait();
    }

signals:
    void resultReady(const QList<QGraphicsItem*> colliding);

protected:
    virtual void run() Q_DECL_OVERRIDE
    {
        if (!isInterruptionRequested())
        {
            emit resultReady(scene->collidingItems(GAOb));
        }
    }
    const GameAbstractObject *GAOb;
    const QGraphicsScene *scene;
};

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

signals:
    void passPos(const QPointF& RED, const QPointF& BLUE);

private slots:
    void on_GameSettingButton_clicked();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void recQuitSign(bool a);
    void timeContinue();
    void RedLabelTextSetting();
    void BlueLabelTextSetting();
    void keySlotOut();
    void reBorn(bool a);
    void setTimeCounter();
    void yieldBean();
    void sceneUpdate();
    void sendPos();
    void handleRedThreads(const QList<QGraphicsItem*> colliding);
    void handleBlueThreads(const QList<QGraphicsItem*> colliding);
    static void handleWallThreads(const wall_object *wall, const QList<QGraphicsItem*> colliding);

private:
    class handleWallTransformer
    {
    private:
        const wall_object* ob;
    public:
        handleWallTransformer(const wall_object *wall): ob(wall) {}
        void operator()(const QList<QGraphicsItem*> colliding)
        {
            handleWallThreads(ob,colliding);
        }
    };

    void startThread()
    {
        SceneThread *sThread = new SceneThread(this, red, &scene);
        connect(sThread, &SceneThread::resultReady, this, &Game::handleRedThreads);
        connect(sThread, &SceneThread::finished, sThread, &SceneThread::deleteLater);
        sThread->start();
        SceneThread *bThread = new SceneThread(this, blue, &scene);
        connect(bThread, &SceneThread::resultReady, this, &Game::handleBlueThreads);
        connect(bThread, &SceneThread::finished, bThread, &SceneThread::deleteLater);
        bThread->start();
        for (auto iter: env)
        {
            SceneThread *wall = new SceneThread(this, iter, &scene);
            connect(wall, &SceneThread::resultReady, this, handleWallTransformer(iter));
            connect(wall, &SceneThread::resultReady, wall, &SceneThread::deleteLater);
            wall->start();
        }
    }

private:
    Ui::Game *ui;
    MainWindow *returnTo;
    SettingPage *sp;
    QTimer *MainTime, *keyTime, *sceneTime;
    pacman_object *red, *blue;
    QList<wall_object *> env;
    QGraphicsScene scene;
    QList<int> keys;
    long long globalTime;
    int totalBeans;
    void JustClose();
    void gameOver(int WinnerType);
    MainWindow* MainWin() const;
};

#endif // GAME_H
