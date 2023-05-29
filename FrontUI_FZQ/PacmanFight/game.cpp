#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

Game::Game(QWidget *parent, QWidget *main) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    QImage Image;
    Image.load(":/images/resources/RedScore.png");
    QPixmap pixmap = QPixmap::fromImage(Image);
    int width = ui->RedScorePixmapLabel->width(), height = ui->RedScorePixmapLabel->height();
    QPixmap fitPixmap = pixmap.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->RedScorePixmapLabel->setPixmap(fitPixmap);
    Image.load(":/images/resources/BlueScore.png");
    pixmap = QPixmap::fromImage(Image);
    width = ui->BlueScorePixmapLabel->width();
    height = ui->BlueScorePixmapLabel->height();
    fitPixmap = pixmap.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->BlueScorePixmapLabel->setPixmap(fitPixmap);
    returnTo = (MainWindow*)main;
    sp = nullptr;
}

Game::~Game()
{
    delete ui;
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
    QEvent HE(QEvent::HoverLeave);
    QCoreApplication::sendEvent(ui->GameSettingButton, &HE);
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
