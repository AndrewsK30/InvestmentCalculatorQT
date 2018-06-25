#ifndef FINANCIAMENTO_H
#define FINANCIAMENTO_H

#include <QObject>

using namespace std;

class Financiamento : public QObject
{
    Q_OBJECT

private:
    int numeroVezes;
    double valorParcela;
    double valorTotalFinanciado;

public:
    Financiamento(int nVezes, double vParcela);

    int getNumeroVezes() { return numeroVezes; }
    double getValorParcela() { return valorParcela; }
    double getValorTotalFinanciado() { return valorTotalFinanciado; }

    void setNumeroVezes(int n);
    void setValorParcela(double v);
    void setValorTotalFinanciado(int nVezes, double vParcela);
};

#endif // FINANCIAMENTO_H
