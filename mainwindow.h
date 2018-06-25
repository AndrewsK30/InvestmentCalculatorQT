#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "caretaker.h"
#include "originator.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Originator *originator = new Originator();
    CareTaker *careTaker = new CareTaker();
    int stateNumber = 0;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

    Ui::MainWindow *ui;
    void setup();
    void contructForm();
    void goNextState();
    void cleanLayout(QLayout *layout);
private slots:
    void onNextState();
    void onPrevState();
};

#endif // MAINWINDOW_H
