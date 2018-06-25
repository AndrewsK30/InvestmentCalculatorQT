#ifndef SIMULACAO_H
#define SIMULACAO_H

#include <QObject>
#include <QString>
#include "financiamento.h"
#include "investimento.h"

using namespace std;

class SimulacaoFacade : public QObject
{
    Q_OBJECT

private:

public:
    static QString compararInvestimentoEFinanciamento(Investimento* investimento, Financiamento* financiamento);
};

#endif // SIMULACAO_H
