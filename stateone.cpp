#include "stateone.h"

#include <QTextEdit>
#include <qformlayout.h>
#include <qlabel.h>
#include <qwidget.h>

StateOne::StateOne()
{

}

void StateOne::constructFromState(QObject *form)
{
    QFormLayout *formLayout = dynamic_cast<QFormLayout*>(form);
    if(formLayout != nullptr){
        QLabel *labelValorDaParcela = new QLabel();
        labelValorDaParcela->setText("Valor da parcela");

        QTextEdit *textEditValorDaParcela = new QTextEdit();
        textEditValorDaParcela->setObjectName(TEXT_EDIT_VALOR_DA_PARCELA);



        QLabel *labelNumDeParcelas = new QLabel();
        labelNumDeParcelas->setText("Num. de parcelas");

        QTextEdit *textEditNumDeParcelas = new QTextEdit();
        textEditNumDeParcelas->setObjectName(TEXT_EDIT_NUM_PARCELAS);


        QLabel *labelValorAhVista = new QLabel();
        labelValorAhVista->setText("Valor a vista");

        QTextEdit *textValorAhVista = new QTextEdit();
        textValorAhVista->setObjectName(TEXT_EDIT_VALOR_A_VISTA);
    }

}

void StateOne::getInformation(QObject *form)
{

}

bool StateOne::infoIsValid()
{
    return true;
}

void StateOne::displayErroMsg()
{

}

void StateOne::saveState()
{

}
