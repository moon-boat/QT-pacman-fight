#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "settingpage.h"
#include <QEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sp = nullptr;
    sp1 = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
    if (sp)
        delete sp;
}

// waiting for implementing game ui
void MainWindow::on_StartGameButton_clicked()
{
    Game *gaming = new Game(nullptr, this);
    ui->StartGameButton->setAttribute(Qt::WA_UnderMouse, false);
    gaming->show();
    this->close();
}


void MainWindow::on_MainMenuSettingButton_clicked()
{
    if (sp)
        delete sp;
    sp = new SettingPage(this, true);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp->move(globalPos);
    ui->MainMenuSettingButton->setAttribute(Qt::WA_UnderMouse, false);
    sp->show();
    connect(sp, &SettingPage::shouldQuit, this, &MainWindow::recQuitSign, Qt::UniqueConnection);
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

void MainWindow::on_MainMenuTutorialButton_clicked()
{
    if (sp1 == nullptr)
        sp1 = new Tutorial(this);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp1->move(globalPos);
    ui->MainMenuSettingButton->setAttribute(Qt::WA_UnderMouse, false);
    sp1->show();
}

