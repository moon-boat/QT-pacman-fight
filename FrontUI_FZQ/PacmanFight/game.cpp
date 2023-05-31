#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

Game::Game(QWidget *parent, QWidget *main) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
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
