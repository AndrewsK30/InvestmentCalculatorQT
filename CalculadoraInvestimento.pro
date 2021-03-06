#-------------------------------------------------
#
# Project created by QtCreator 2018-05-22T19:19:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CalculadoraInvestimento
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
SOURCES += \
        main.cpp \
        mainwindow.cpp \
    form.cpp \
    memento.cpp \
    originator.cpp \
    caretaker.cpp \
    stateone.cpp \
    state.cpp \
    statefactory.cpp \
    statetwo.cpp \
    statethree.cpp \
    statefour.cpp \
    investmentcontext.cpp \
    financiamento.cpp \
    investimento.cpp \
    poupanca.cpp \
    simulacaofacade.cpp \
    tesouroselic.cpp \
    investmentfactory.cpp \
    cdb.cpp

HEADERS += \
        mainwindow.h \
    form.h \
    memento.h \
    originator.h \
    caretaker.h \
    stateone.h \
    state.h \
    statefactory.h \
    statetwo.h \
    statethree.h \
    statefour.h \
    investmentcontext.h \
    financiamento.h \
    investimento.h \
    poupanca.h \
    simulacaofacade.h \
    tesouroselic.h \
    investmentfactory.h \
    investmenttypes.h \
    cdb.h

FORMS += \
        mainwindow.ui
