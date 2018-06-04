#ifndef STATEONE_H
#define STATEONE_H

#include "state.h"

#include <QObject>

class StateOne : public State
{
protected:
    const QString TEXT_EDIT_NUM_PARCELAS = "textEditNumParcelas";
    const QString TEXT_EDIT_VALOR_A_VISTA = "textEditValorAhVista";
    const QString TEXT_EDIT_VALOR_DA_PARCELA = "textEditValorDaParcela";

    double valorDaParcela;
    double valorAhVista;
    int numDeVezes;

public:
    StateOne();
protected:
    void constructFromState(QObject *form);
    void getInformation(QObject *form);
    bool infoIsValid();
    void displayErroMsg();
    void saveState();
};

#endif // STATEONE_H
