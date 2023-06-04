#ifndef SETTINGPAGE_H
#define SETTINGPAGE_H

#include <QWidget>

namespace Ui {
class SettingPage;
}

class SettingPage : public QWidget
{
    Q_OBJECT

public:
    explicit SettingPage(QWidget *parent = nullptr, bool main = false);
    ~SettingPage();


private slots:
    void on_QuitButtonInSetting_clicked();

    void on_ReturnParentInSetting_clicked();

    void on_timeLimitSlider_valueChanged(int value);

    void on_PacmanLPSlider_valueChanged(int value);

    void on_PacmanWalkSlider_valueChanged(int value);

    void on_BeanNumSlider_valueChanged(int value);

    void on_PacmanRotationSlider_valueChanged(int value);

    void on_BeanRateSlider_valueChanged(int value);

    void on_PacmanAttackSlider_valueChanged(int value);

    void on_ShootLimitSlider_valueChanged(int value);

    void on_UpdateSlider_valueChanged(int value);

signals:
    void shouldQuit(bool a);
    void timeContinue(bool a);
private:
    Ui::SettingPage *ui;
};

#endif // SETTINGPAGE_H
