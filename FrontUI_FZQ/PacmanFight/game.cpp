#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

int frameUpdateSeconds = 33;

QRectF testBulletBoundingRectangle(0, 0, 4, 25);
QString testBulletPictureIconPath(":/images/resources/bullet.png");
testBullet::testBullet(): GameAbstractObject(testBulletBoundingRectangle, testBulletPictureIconPath, bullet, QPointF(0, 0), 0.2, 45)
{}

void testBullet::update()
{
    updatePos(frameUpdateSeconds);
}

Game::Game(QWidget *parent, QWidget *main) :
    QWidget(parent),
    ui(new Ui::Game),
    globalTime(0)
{
    ui->setupUi(this);
    returnTo = (MainWindow*)main;
    sp = nullptr;
    time = new QTimer(this);
    connect(time, &QTimer::timeout, this, &Game::timeCounter);
    connect(time, &QTimer::timeout, this, &Game::BlueLabelTestTextSetting);
    time->start(frameUpdateSeconds);
    scene.setSceneRect(0, 0, 1024, 768);
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
    if (event->key() == Qt::Key_W)
    {
        testBullet *tb = new testBullet;
        connect(time, &QTimer::timeout, tb, &testBullet::update);
        scene.addItem(tb);
    }
}
