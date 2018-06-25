#ifndef TESOUROSELIC_H
#define TESOUROSELIC_H

#include <QObject>
#include "investimento.h"

using namespace std;

class TesouroSelic : public Investimento
{
protected:
    double deduzirImposto(double valorFinalSemImposto, double valorRendido);

public:
    TesouroSelic(double rAnual, double vInvestido, QDate* dtRetorno);
};


#endif // TESOUROSELIC_H
