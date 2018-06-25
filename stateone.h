#ifndef STATEONE_H
#define STATEONE_H

#include "state.h"

#include <QObject>

const QString TEXT_EDIT_NUM_PARCELAS = "textEditNumParcelas";
const QString TEXT_EDIT_VALOR_A_VISTA = "textEditValorAhVista";
const QString TEXT_EDIT_VALOR_DA_PARCELA = "textEditValorDaParcela";

class StateOne : public State
{
protected:
    double valorDaParcela = 0.0;
    int numDeVezes = 0;

public:
    StateOne();
protected:
    void constructFromState(QObject *form);
    void getInformationAndSaveState(QObject *form);
    bool infoIsValid();
    void displayErroMsg();

    // State interface
protected:
    void saveInContext();
};

#endif // STATEONE_H
