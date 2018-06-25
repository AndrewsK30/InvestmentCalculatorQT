#include "investimento.h"
#include "investmentcontext.h"
#include "investmentfactory.h"
#include "statethree.h"

#include <QLineEdit>
#include <qformlayout.h>
#include <qlabel.h>


StateThree::StateThree()
{
    QString dateNow = QDate::currentDate().toString(DATE_STRING_FORMAT);
    dataFinalFinanciamento = dateNow;
}

void StateThree::constructFromState(QObject *form)
{
    QFormLayout *formLayout = dynamic_cast<QFormLayout*>(form);
    if(formLayout != nullptr){

        QLabel *labelTaxa = new QLabel();
        labelTaxa->setText("Renda anual");

        QLineEdit *textEditTaxa = new QLineEdit();
        textEditTaxa->setObjectName(TEXT_EDIT_RENDA_ANUAL);
        textEditTaxa->setText(QString::number(rendaAnual*100));

        formLayout->setWidget(0,QFormLayout::LabelRole,labelTaxa);
        formLayout->setWidget(0,QFormLayout::FieldRole,textEditTaxa);

        QLabel *labelValorInvestimento = new QLabel();
        labelValorInvestimento->setText("Valor de investimento");


        QLineEdit *textEditValorInvestimento = new QLineEdit();
        textEditValorInvestimento->setObjectName(TEXT_EDIT_VALOR_INVESTIMENTO);
        textEditValorInvestimento->setText(QString::number(valorInvestimento));

        formLayout->setWidget(1,QFormLayout::LabelRole,labelValorInvestimento);
        formLayout->setWidget(1,QFormLayout::FieldRole,textEditValorInvestimento);


        QLabel *labelData = new QLabel();
        labelData->setText("Data a final do parcelamento");

        QLineEdit *textData = new QLineEdit();
        textData->setObjectName(TEXT_EDIT_DATA_FINAL_FINANCIAMENTO);

        textData->setText(dataFinalFinanciamento);

        formLayout->setWidget(2,QFormLayout::LabelRole,labelData);
        formLayout->setWidget(2,QFormLayout::FieldRole,textData);
    }
}

void StateThree::getInformationAndSaveState(QObject *form)
{
    this->rendaAnual = form->findChild<QLineEdit*>(TEXT_EDIT_RENDA_ANUAL)->text().toDouble()/100;
    this->valorInvestimento = form->findChild<QLineEdit*>(TEXT_EDIT_VALOR_INVESTIMENTO)->text().toDouble();
    this->dataFinalFinanciamento = form->findChild<QLineEdit*>(TEXT_EDIT_DATA_FINAL_FINANCIAMENTO)->text();
}

bool StateThree::infoIsValid()
{
    return true;
}

void StateThree::displayErroMsg()
{

}

void StateThree::saveInContext()
{
    QDate date = QDate::fromString(this->dataFinalFinanciamento,DATE_STRING_FORMAT);
    Investimento* investimento = InvestmentFactory::getInvestment(
        *InvestmentContext::getInstance()->getInvestment(),
        this->rendaAnual,
        this->valorInvestimento,
        &date
    );
    InvestmentContext::getInstance()->setInvestimento(investimento);

}
