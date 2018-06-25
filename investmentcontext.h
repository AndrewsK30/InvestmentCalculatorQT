#ifndef INVESTMENTCONTEXT_H
#define INVESTMENTCONTEXT_H

#include "financiamento.h"
#include "investimento.h"



class InvestmentContext
{
private:

    Investimento* investimento;
    Financiamento* financiamento;
    QString* investment;

    static InvestmentContext* instance;
    InvestmentContext(){}

public:

    static InvestmentContext* getInstance(){
        if (instance == 0)
        {
            instance = new InvestmentContext();
        }

        return instance;
    }


    Financiamento *getFinanciamento() const;
    void setFinanciamento(Financiamento *value);
    Investimento *getInvestimento() const;
    void setInvestimento(Investimento *value);
    QString *getInvestment() const;
    void setInvestment(QString *value);
};
#endif // INVESTMENTCONTEXT_H
