#include "investmentcontext.h"
#include "statetwo.h"

#include <QComboBox>
#include <qformlayout.h>

QString StateTwo::getChoosedInvesment() const
{
    return choosedInvesment;
}

StateTwo::StateTwo()
{
    StateTwo::investmetList.append(POUPANCA);
    StateTwo::investmetList.append(TESOURO_SELIC);
}

void StateTwo::constructFromState(QObject *form)
{
    QComboBox* comboBox = new QComboBox;
    comboBox->addItems(this->investmetList);

    comboBox->setObjectName(COMBO_BOX_CHOOSE_INVESTMENT);

    int index = comboBox->findText(choosedInvesment);
    if ( index != -1 ) {
       comboBox->setCurrentIndex(index);
    }

    QFormLayout *formLayout = dynamic_cast<QFormLayout*>(form);
    if(formLayout != nullptr){
        formLayout->setWidget(0,QFormLayout::SpanningRole,comboBox);
    }
}

void StateTwo::getInformationAndSaveState(QObject *form)
{
    this->choosedInvesment = form->findChild<QComboBox*>(COMBO_BOX_CHOOSE_INVESTMENT)->currentText();
}

bool StateTwo::infoIsValid()
{
    return true;
}

void StateTwo::displayErroMsg()
{

}

void StateTwo::saveInContext()
{
    InvestmentContext::getInstance()->setInvestment(&this->choosedInvesment);
}
