#include "investmentcontext.h"


InvestmentContext* InvestmentContext::instance = 0;

Financiamento *InvestmentContext::getFinanciamento() const
{
    return financiamento;
}

void InvestmentContext::setFinanciamento(Financiamento *value)
{
    financiamento = value;
}

Investimento *InvestmentContext::getInvestimento() const
{
    return investimento;
}

void InvestmentContext::setInvestimento(Investimento *value)
{
    investimento = value;
}

QString *InvestmentContext::getInvestment() const
{
    return investment;
}

void InvestmentContext::setInvestment(QString *value)
{
    investment = value;
}
