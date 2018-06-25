#include "statefactory.h"
#include "statefour.h"
#include "stateone.h"
#include "statethree.h"
#include "statetwo.h"

StateFactory::StateFactory()
{

}

State* StateFactory::getState(int state)
{
    switch (state) {
    case 0:
        return new StateOne;
        break;
    case 1:
        return new StateTwo;
        break;
    case 2:
        return new StateThree;
        break;
    case 3:
        return new StateFour;
    default:
        return NULL;
    }
}
