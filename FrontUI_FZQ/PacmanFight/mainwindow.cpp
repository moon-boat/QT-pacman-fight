#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "settingpage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// waiting for implementing game ui
void MainWindow::on_StartGameButton_clicked()
{
    Game *gaming = new Game(nullptr, this);
    gaming->show();
    this->close();
}


void MainWindow::on_MainMenuSettingButton_clicked()
{
    SettingPage *sp = new SettingPage(this);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp->move(globalPos.x(), globalPos.y());
    sp->show();
    connect(sp, &SettingPage::shouldQuit, this, &MainWindow::recQuitSign);
}

void MainWindow::recQuitSign(bool a)
{
    if (a)
        close();
}


void MainWindow::on_MainMenuQuitButton_clicked()
{
    close();
}

