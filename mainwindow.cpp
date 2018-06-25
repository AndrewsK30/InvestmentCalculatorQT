#include "mainwindow.h"
#include "statefactory.h"
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
    connect(ui->previousStateButton, SIGNAL(released()),this,SLOT(onPrevState()));
    goNextState();
    this->contructForm();
}

void MainWindow::contructForm()
{
    cleanLayout(ui->formLayout);
    originator->getState()->construct(ui->formLayout);
}

void MainWindow::goNextState()
{
    originator->setState(
                StateFactory::getState(this->stateNumber)
    );
}

void MainWindow::cleanLayout(QLayout *layout)
{
    if (layout) {
        while(layout->count() > 0){
            QLayoutItem *item = layout->takeAt(0);
            delete item->widget();
            delete item;
        }
    }
}

void MainWindow::onNextState()
{
    State *state = originator->getState();
    if(state->canGoNextState(ui->centralWidget) && stateNumber != 3){
        this->stateNumber++;
        ui->stateLabel->setText(QString::number(stateNumber+1));
        careTaker->add(originator->saveStateToMemento());
        goNextState();
        contructForm();
    }
}

void MainWindow::onPrevState()
{
    if(stateNumber != 0){
        this->stateNumber--;
        ui->stateLabel->setText(QString::number(stateNumber+1));
        originator->getStateFromMemento(careTaker->undo());
        contructForm();
    }
}
