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
    explicit SettingPage(QWidget *parent = nullptr);
    ~SettingPage();


private slots:
    void on_QuitButtonInSetting_clicked();
    void on_ReturnParentInSetting_clicked();

signals:
    void shouldQuit(bool a);
private:
    Ui::SettingPage *ui;
};

#endif // SETTINGPAGE_H
