#ifndef STATETWO_H
#define STATETWO_H

#include "state.h"
#include "investmenttypes.h"




const QString COMBO_BOX_CHOOSE_INVESTMENT = "comboboxChooseInvestment";

class StateTwo : public State
{
    QString choosedInvesment;

public:
    QStringList investmetList;
    StateTwo();
    // State interface
    QString getChoosedInvesment() const;

protected:
    void constructFromState(QObject *form);
    void getInformationAndSaveState(QObject *form);
    bool infoIsValid();
    void displayErroMsg();

    // State interface
protected:
    void saveInContext();
};

#endif // STATETWO_H
