#ifndef STATE_H
#define STATE_H

#include <QObject>



class State
{
protected:
    State();
public:

    ~State();

    bool canGoNextState(QObject *form){

        getInformation(form);
        saveState();

        if(infoIsValid()){
            displayErroMsg();
            return false;
        }

        return true;
    }

    void construct(QObject *form){
        constructFromState(form);
    }

protected:
    virtual void constructFromState(QObject *form)=0;
    virtual void getInformation(QObject *form)=0;
    virtual bool infoIsValid()=0;
    virtual void displayErroMsg()=0;
    virtual void saveState()=0;
};

#endif // STATE_H
