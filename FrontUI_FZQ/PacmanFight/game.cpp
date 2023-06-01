#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

QRectF testBullet::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(0 - penWidth / 2, 0 - penWidth / 2, 4, 25);
}

void testBullet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawImage(boundingRect(), QImage(icon_path));
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
    time->start(33);
    scene.setSceneRect(0, 0, 1024, 768);
    ui->graphicsView->setScene(&scene);
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
        tb->setPos(100 + 50 * cos(globalTime), 100 + 50 * sin(globalTime));
        scene.addItem(tb);
    }
}
