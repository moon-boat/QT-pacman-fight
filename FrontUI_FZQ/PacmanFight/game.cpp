#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

QRectF testBulletBoundingRectangle(0, 0, 4, 25);
QString testBulletPictureIconPath(":/images/resources/bullet.png");
testBullet::testBullet(): GameAbstractObject(testBulletBoundingRectangle, testBulletPictureIconPath)
{}

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
    time->start(33);
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
    for (auto iter: objInScene)
        delete iter;
}

void Game::on_GameSettingButton_clicked()
{
    if (sp == nullptr)
        sp = new SettingPage(this);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp->move(globalPos.x(), globalPos.y());
    ui->GameSettingButton->setAttribute(Qt::WA_UnderMouse, false);
    sp->show();
    connect(sp, &SettingPage::shouldQuit, this, &Game::recQuitSign, Qt::UniqueConnection);
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

void Game::timeCounter()
{
    globalTime++;
}

void Game::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W)
    {
        testBullet *tb = new testBullet;
        objInScene.append(tb);
        char p[160] {};
        itoa(objInScene.size(), p, 10);
        ui->BlueScoreLabel->setText(p);
        tb->setPos(100 + 100 * cos(globalTime), (100 + 100 * globalTime) % 768);
        scene.addItem(tb);
    }
}
