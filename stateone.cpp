#include "financiamento.h"
#include "investmentcontext.h"
#include "stateone.h"

#include <QTextEdit>
#include <qformlayout.h>
#include <qlabel.h>
#include <qlineedit.h>
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

        QLineEdit *textEditValorDaParcela = new QLineEdit();
        textEditValorDaParcela->setObjectName(TEXT_EDIT_VALOR_DA_PARCELA);
        textEditValorDaParcela->setText(QString::number(valorDaParcela));

        formLayout->setWidget(0,QFormLayout::LabelRole,labelValorDaParcela);
        formLayout->setWidget(0,QFormLayout::FieldRole,textEditValorDaParcela);

        QLabel *labelNumDeParcelas = new QLabel();
        labelNumDeParcelas->setText("Num. de parcelas");


        QLineEdit *textEditNumDeParcelas = new QLineEdit();
        textEditNumDeParcelas->setObjectName(TEXT_EDIT_NUM_PARCELAS);

        textEditNumDeParcelas->setText(QString::number(numDeVezes));

        formLayout->setWidget(1,QFormLayout::LabelRole,labelNumDeParcelas);
        formLayout->setWidget(1,QFormLayout::FieldRole,textEditNumDeParcelas);
    }

}

void StateOne::getInformationAndSaveState(QObject *form)
{
    this->numDeVezes = form->findChild<QLineEdit*>(TEXT_EDIT_NUM_PARCELAS)->text().toInt();
    this->valorDaParcela = form->findChild<QLineEdit*>(TEXT_EDIT_VALOR_DA_PARCELA)->text().toDouble();
}

bool StateOne::infoIsValid()
{
    return true;
}

void StateOne::displayErroMsg()
{

}

void StateOne::saveInContext()
{
    Financiamento* financiamento = new Financiamento(this->numDeVezes,this->valorDaParcela);
    InvestmentContext::getInstance()->setFinanciamento(financiamento);
}

