#include "mainwindow.h"
#include "stateone.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setup();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setup()
{
    connect(ui->nextStateButton, SIGNAL(released()),this,SLOT(onNextState()));

    State *firstState = new StateOne();
    originator->setState(firstState);
    this->contructForm();
}

void MainWindow::contructForm()
{
    originator->getState()->construct(ui->formLayout);
}

void MainWindow::onNextState()
{
    State *state = originator->getState();
    if(state->canGoNextState(ui->formLayout)){

    }
}

void MainWindow::onPrevState()
{

}
