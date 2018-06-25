#ifndef INVESTMENTFACTORY_H
#define INVESTMENTFACTORY_H

#include "investimento.h"
#include "investmenttypes.h"


class InvestmentFactory
{
public:
    InvestmentFactory();
    static Investimento *getInvestment(QString investmentType,double rAnual, double vInvestido, QDate* dtRetorno);
};

#endif // INVESTMENTFACTORY_H
