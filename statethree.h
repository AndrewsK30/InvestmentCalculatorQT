#ifndef STATETHREE_H
#define STATETHREE_H

#include "state.h"

#include <QDate>



const QString TEXT_EDIT_RENDA_ANUAL = "textEditRendaAnual";
const QString TEXT_EDIT_VALOR_INVESTIMENTO = "textEditValorInvestimento";
const QString TEXT_EDIT_DATA_FINAL_FINANCIAMENTO = "textEditDataFinalFinanciamento";
const QString DATE_STRING_FORMAT = "dd/MM/yyyy";

class StateThree : public State
{
    double rendaAnual = 0;
    double valorInvestimento = 0;
    QString dataFinalFinanciamento;

public:
    StateThree();

    // State interface
protected:
    void constructFromState(QObject *form);
    void getInformationAndSaveState(QObject *form);
    bool infoIsValid();
    void displayErroMsg();

    // State interface
protected:
    void saveInContext();
};

#endif // STATETHREE_H
