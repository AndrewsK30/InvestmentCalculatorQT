#include "originator.h"

State *Originator::getState() const
{
    return state;
}

void Originator::setState(State *value)
{
    state = value;
}

Memento *Originator::saveStateToMemento()
{
    return new Memento(state);
}

void Originator::getStateFromMemento(Memento *memento)
{
    state = memento->getState();
}

Originator::Originator()
{

}
