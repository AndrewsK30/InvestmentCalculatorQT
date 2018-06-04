#include "caretaker.h"

CareTaker::CareTaker()
{

}

void CareTaker::add(Memento *state)
{
    mementoList.append(state);
}

Memento* CareTaker::undo()
{
    return mementoList.pop();
}
