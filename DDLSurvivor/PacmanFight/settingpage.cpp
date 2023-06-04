#include "setting.h"
#include "settingpage.h"
#include "ui_settingpage.h"

SettingPage::SettingPage(QWidget *parent, bool main):
    QWidget(parent),
    ui(new Ui::SettingPage)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Popup);
    setWindowOpacity(0.7);
    ui->timeLimitSlider->setValue(setting::timeLimit / (1000 / setting::frameUpdateSeconds));
    ui->PacmanLPSlider->setValue(setting::PacmanLifePoint);
    ui->PacmanWalkSlider->setValue(setting::pacmanWalkLength * 1000);
    ui->PacmanRotationSlider->setValue(setting::pacmanRotation * 1000);
    ui->BeanNumSlider->setValue(setting::BeansLimit);
    ui->BeanRateSlider->setValue(setting::beanYieldRate);
    ui->PacmanAttackSlider->setValue(setting::bulletAttack);
    ui->ShootLimitSlider->setValue(setting::shootingLimit);
    ui->UpdateSlider->setValue(1000 / setting::frameUpdateSeconds);
    if (!main)
    {
        ui->PacmanLPSlider->setHidden(true);
        ui->PacmanLPLabel->setHidden(true);
        ui->PacmanLPSetting->setHidden(true);
    }
}

SettingPage::~SettingPage()
{
    disconnect();
    delete ui;
}

void SettingPage::on_QuitButtonInSetting_clicked()
{
    ui->QuitButtonInSetting->setAttribute(Qt::WA_UnderMouse, false);
    close();
    emit shouldQuit(1);
}

void SettingPage::on_ReturnParentInSetting_clicked()
{
    ui->ReturnParentInSetting->setAttribute(Qt::WA_UnderMouse, false);
    close();
    emit timeContinue(1);
}

void SettingPage::on_timeLimitSlider_valueChanged(int value)
{
    setting::timeLimit = value * 30;
    char p[4] {};
    itoa(value, p, 10);
    ui->TimeLimitLabel->setText(p);
}

void SettingPage::on_PacmanLPSlider_valueChanged(int value)
{
    setting::PacmanLifePoint = value;
    char p[4] {};
    itoa(value, p, 10);
    ui->PacmanLPLabel->setText(p);
}

void SettingPage::on_PacmanWalkSlider_valueChanged(int value)
{
    setting::pacmanWalkLength = ((qreal)value)/1000;
    char p[4] {};
    itoa(value, p, 10);
    ui->PacmanWalkLabel->setText(p);
}


void SettingPage::on_PacmanRotationSlider_valueChanged(int value)
{
    setting::pacmanRotation = ((qreal)value)/1000;
    char p[4] {};
    itoa(value, p, 10);
    ui->PacmanRotationLabel->setText(p);
}

void SettingPage::on_BeanNumSlider_valueChanged(int value)
{
    setting::BeansLimit = value;
    char p[4] {};
    itoa(value, p, 10);
    ui->BeanNumLabel->setText(p);
}

void SettingPage::on_BeanRateSlider_valueChanged(int value)
{
    setting::beanYieldRate = value;
    char p[4] {};
    itoa(value, p, 10);
    ui->BeanRateLabel->setText(p);
}

void SettingPage::on_PacmanAttackSlider_valueChanged(int value)
{
    setting::bulletAttack = value;
    char p[4] {};
    itoa(value, p, 10);
    ui->PacmanAttackLabel->setText(p);
}

void SettingPage::on_ShootLimitSlider_valueChanged(int value)
{
    setting::shootingLimit = value;
    char p[4] {};
    itoa(value, p, 10);
    ui->ShootLimitLabel->setText(p);
}

void SettingPage::on_UpdateSlider_valueChanged(int value)
{
    setting::frameUpdateSeconds = 1000 / value;
    char p[4] {};
    itoa(value, p, 10);
    ui->UpdateLabel->setText(p);
}

