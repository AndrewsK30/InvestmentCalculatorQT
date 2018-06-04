#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"
#include "state.h"



class Originator
{
    State* state;
public:
    Originator();

    State *getState() const;
    void setState(State *value);

    Memento *saveStateToMemento();
    void getStateFromMemento(Memento *memento);

};

#endif // ORIGINATOR_H
