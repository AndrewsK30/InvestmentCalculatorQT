#ifndef STATE_H
#define STATE_H

#include <QObject>



class State
{
protected:
    State();
public:

    bool canGoNextState(QObject *form){

        getInformationAndSaveState(form);

        if(!infoIsValid()){
            displayErroMsg();
            return false;
        }
        saveInContext();

        return true;
    }

    void construct(QObject *form){
        constructFromState(form);
    }

protected:
    virtual void constructFromState(QObject *form)=0;
    virtual void getInformationAndSaveState(QObject *form)=0;
    virtual bool infoIsValid()=0;
    virtual void displayErroMsg()=0;
    virtual void saveInContext(){}
};

#endif // STATE_H
