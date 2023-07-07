#include "tutorial.h"
#include "ui_tutorial.h"

Tutorial::Tutorial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tutorial)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Popup);
}

Tutorial::~Tutorial()
{
    delete ui;
}

void Tutorial::on_ReturnButtonInTutorial_clicked()
{
    ui->ReturnButtonInTutorial->setAttribute(Qt::WA_UnderMouse, false);
    close();
}

