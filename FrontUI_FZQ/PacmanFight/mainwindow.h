#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void recQuitSign(bool a);

private slots:
    void on_StartGameButton_clicked();

    void on_MainMenuSettingButton_clicked();

    void on_MainMenuQuitButton_clicked();

private:
    Ui::MainWindow *ui;
    SettingPage *sp;

};
#endif // MAINWINDOW_H
