#ifndef STATEFOUR_H
#define STATEFOUR_H

#include "state.h"



class StateFour : public State
{

public:
    StateFour();

    // State interface
protected:
    void constructFromState(QObject *form);
    void getInformationAndSaveState(QObject *form);
    bool infoIsValid();
    void displayErroMsg();
};

#endif // STATEFOUR_H
