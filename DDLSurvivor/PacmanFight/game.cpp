#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

int frameUpdateSeconds = 33;
qreal pacmanWalkLength = 0.03;
qreal pacmanRotation = 0.06;
int shootingLimit = 10;

QRectF testBulletBoundingRectangle(0, 0, 25, 4);
QString testBulletPictureIconPath(":/images/resources/bullet.png");

testBullet::testBullet(): GameAbstractObject(testBulletBoundingRectangle, testBulletPictureIconPath, bullet, QPointF(0, 0), 0.2, 45)
{}

void testBullet::update()
{
    updatePos(frameUpdateSeconds);
}

Game::Game(QWidget *parent, QWidget *main):
    QWidget(parent),
    ui(new Ui::Game),
    globalTime(0)
{
    ui->setupUi(this);
    returnTo = (MainWindow*)main;
    sp = nullptr;
    time = new QTimer(this);
    keyTime = new QTimer(this);
    setFocusPolicy(Qt::StrongFocus);

    connect(time, &QTimer::timeout, this, &Game::timeCounter);
    connect(time, &QTimer::timeout, this, &Game::BlueLabelTestTextSetting);
    connect(keyTime, &QTimer::timeout, this, &Game::keySlotOut);

    time->start(frameUpdateSeconds);
    scene.setSceneRect(0, 0, 1024, 768);

    red = new pacman_object(0);
    blue = new pacman_object(1);

    scene.addItem(red);
    scene.addItem(blue);

    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->show();
}

Game::~Game()
{
    delete ui;
    delete time;
    if (sp)
        delete sp;
    for (auto iter: scene.items())
    {
        GameAbstractObject *t = (GameAbstractObject *)iter;
        bullet_object *tp1;
        pacman_object *tp2;
        wall_object *tp3;
        bean_object *tp4;
        switch (t->type)
        {
        case bullet:
            tp1 = (bullet_object *)t;
            delete tp1;
            break;
        case pacman:
            tp2 = (pacman_object *)t;
            delete tp2;
            break;
        case wall:
            tp3 = (wall_object *)t;
            delete tp3;
            break;
        case bean:
            tp4 = (bean_object *)t;
            delete tp4;
            break;
        }
    }
}

void Game::on_GameSettingButton_clicked()
{
    if (sp == nullptr)
        sp = new SettingPage(this);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp->move(globalPos.x(), globalPos.y());
    ui->GameSettingButton->setAttribute(Qt::WA_UnderMouse, false);
    sp->show();
    time->stop();
    connect(sp, &SettingPage::shouldQuit, this, &Game::recQuitSign, Qt::UniqueConnection);
    connect(sp, &SettingPage::timeContinue, this, &Game::timeContinue, Qt::UniqueConnection);
}

void Game::recQuitSign(bool a)
{
    if (a)
        JustClose();
}

void Game::JustClose()
{
    if (returnTo)
    {
        returnTo->show();
    }
    delete this;
}

void Game::timeContinue()
{
    time->start(frameUpdateSeconds);
}

void Game::timeCounter()
{
    globalTime++;
    scene.update();
}

void Game::BlueLabelTestTextSetting()
{
    char p[120]{};
    itoa(scene.items().size(), p, 10);
    ui->BlueScoreLabel->setText(p);
}

void Game::keyPressEvent(QKeyEvent *event)
{
    if (!event->isAutoRepeat())
        keys.append(event->key());
    if (!keyTime->isActive())
        keyTime->start(4);
}

void Game::keyReleaseEvent(QKeyEvent *event)
{
    if (!event->isAutoRepeat())
        keys.removeAll(event->key());
    if (keys.isEmpty())
        keyTime->stop();
}

void Game::keySlotOut()
{
    QPointF pos;
    qreal angle;
    bullet_object *ob;
    for (int key: keys)
    {
        switch (key)
        {
        case Qt::Key_W:
            pos = red->Pacman::getPosition();
            angle = red->getGunAngle() * acos(-1) / 180;
            pos.rx() += pacmanWalkLength * frameUpdateSeconds * cos(angle);
            pos.ry() += pacmanWalkLength * frameUpdateSeconds * sin(angle);
            red->setPosition(pos);
            break;
        case Qt::Key_A:
            angle = red->getGunAngle();
            red->set_angle(angle - pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_D:
            angle = red->getGunAngle();
            red->set_angle(angle + pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_S:
            if (globalTime - red->lastShooting() > shootingLimit)
            {
                red->lastShooting() = globalTime;
                pos = red->Pacman::getPosition();
                angle = red->getGunAngle();
                ob = new bullet_object(pos, angle);
                connect(time, &QTimer::timeout, ob, &bullet_object::update);
                scene.addItem(ob);
            }
            break;
        case Qt::Key_Up:
            pos = blue->Pacman::getPosition();
            angle = blue->getGunAngle() * acos(-1) / 180;
            pos.rx() += pacmanWalkLength * frameUpdateSeconds * cos(angle);
            pos.ry() += pacmanWalkLength * frameUpdateSeconds * sin(angle);
            blue->setPosition(pos);
            break;
        case Qt::Key_Left:
            angle = blue->getGunAngle();
            blue->set_angle(angle - pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_Right:
            angle = blue->getGunAngle();
            blue->set_angle(angle + pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_Down:
            if (globalTime - blue->lastShooting() > shootingLimit)
            {
                blue->lastShooting() = globalTime;
                pos = blue->Pacman::getPosition();
                angle = blue->getGunAngle();
                ob = new bullet_object(pos, angle);
                connect(time, &QTimer::timeout, ob, &bullet_object::update);
                scene.addItem(ob);
            }
            break;
        }
    }
}
