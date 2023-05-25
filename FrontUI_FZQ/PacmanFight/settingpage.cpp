#include "settingpage.h"
#include "ui_settingpage.h"

SettingPage::SettingPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingPage)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Popup);
    setWindowOpacity(0.7);
}

SettingPage::~SettingPage()
{
    delete ui;
}

void SettingPage::on_QuitButtonInSetting_clicked()
{
    close();
    emit shouldQuit(1);
}


void SettingPage::on_ReturnParentInSetting_clicked()
{
    close();
}

