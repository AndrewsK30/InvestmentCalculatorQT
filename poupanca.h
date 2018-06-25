#ifndef POUPANCA_H
#define POUPANCA_H

#include <QObject>
#include "investimento.h"

using namespace std;

class Poupanca : public Investimento
{
protected:
    double deduzirImposto(double valorFinalSemImposto, double valorRendido);

public:
    Poupanca(double rAnual, double vInvestido, QDate* dtRetorno);

};

#endif // POUPANCA_H
