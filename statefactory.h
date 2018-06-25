#ifndef STATEFACTORY_H
#define STATEFACTORY_H

#include "state.h"



class StateFactory
{
    StateFactory();
public:

    static State *getState(int state);

};

#endif // STATEFACTORY_H
