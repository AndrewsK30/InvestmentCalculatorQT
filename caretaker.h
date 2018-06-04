#ifndef CARETAKER_H
#define CARETAKER_H

#include "memento.h"

#include <QStack>



class CareTaker
{
    QStack<Memento*> mementoList;

public:
    CareTaker();
    void add(Memento *state);
    Memento* undo();
};

#endif // CARETAKER_H
