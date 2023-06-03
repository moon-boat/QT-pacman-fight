#include "gameoverwidget.h"
#include "ui_gameoverwidget.h"

GameOverWidget::GameOverWidget(int winner, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOverWidget)
{
    ui->setupUi(this);
    ui->WinnerDisplayInGameOverWidget->setStyleSheet((winner == 0 ? "QLabel{color: rgb(255, 0, 0); font: 16pt \"Segoe Print\";}" : "QLabel{color: rgb(0, 0, 255); font: 16pt \"Segoe Print\";}"));
    ui->WinnerDisplayInGameOverWidget->setText((winner == 0 ? "Red Pacman Win!" : "Blue Pacman Win!"));
}

GameOverWidget::~GameOverWidget()
{
    disconnect();
    delete ui;
}

void GameOverWidget::on_RestartInGameOverWidget_clicked()
{
    close();
    emit newOne(1);
    delete this;
}


void GameOverWidget::on_QuitInGameOverWidget_clicked()
{
    close();
    emit newOne(0);
    delete this;
}

