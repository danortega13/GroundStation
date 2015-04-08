#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "options.h"
#include <QPropertyAnimation>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void openOptions();
    void openTutorial();
    void missionPlanningClicked();
    void missionExecutionClicked();
    void missionRecapClicked();

    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *animation;
};

#endif // MAINWINDOW_H
