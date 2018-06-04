#include "memento.h"

Memento::Memento(State *state)
{
    this->state = state;
}

State *Memento::getState()
{
    return this->state;
}
