#include "investmentfactory.h"
#include "poupanca.h"
#include "tesouroselic.h"

InvestmentFactory::InvestmentFactory()
{

}

Investimento *InvestmentFactory::getInvestment(QString investmentType,double rAnual, double vInvestido, QDate* dtRetorno)
{
    if(QString::compare(investmentType,POUPANCA)){
        return new Poupanca(rAnual,vInvestido,dtRetorno);
    }else if(QString::compare(investmentType,TESOURO_SELIC)){
        return new TesouroSelic(rAnual,vInvestido,dtRetorno);
    }else{
        return NULL;
    }
}
