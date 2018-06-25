#include "investmentcontext.h"
#include "simulacaofacade.h"
#include "statefour.h"

#include <qformlayout.h>
#include <qlabel.h>

StateFour::StateFour()
{

}

void StateFour::constructFromState(QObject *form)
{
    QFormLayout *formLayout = dynamic_cast<QFormLayout*>(form);
    if(formLayout != nullptr){
        QString resp =  SimulacaoFacade::compararInvestimentoEFinanciamento(
            InvestmentContext::getInstance()->getInvestimento(),
            InvestmentContext::getInstance()->getFinanciamento()
        );
        QLabel *labelResp = new QLabel();
        labelResp->setText(resp);
        formLayout->setWidget(0,QFormLayout::SpanningRole,labelResp);
    }

}

void StateFour::getInformationAndSaveState(QObject *form)
{

}

bool StateFour::infoIsValid()
{
    return true;
}

void StateFour::displayErroMsg()
{

}
