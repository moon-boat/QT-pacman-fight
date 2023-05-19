#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

Game::Game(QWidget *parent, QWidget *main) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    returnTo = main;
}

Game::~Game()
{
    delete ui;
}

void Game::on_GameSettingButton_clicked()
{
    SettingPage *sp = new SettingPage(this);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp->move(globalPos.x(), globalPos.y());
    sp->show();
    connect(sp, &SettingPage::shouldQuit, this, &Game::recQuitSign);
}

void Game::recQuitSign(bool a)
{
    if (a)
        JustClose();
}

void Game::JustClose()
{
    if (returnTo)
        returnTo->show();
    delete this;
}
