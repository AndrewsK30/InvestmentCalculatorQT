#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

#include <QObject>
#include <QDate>

using namespace std;

class Investimento : public QObject
{
    Q_OBJECT

private:
    double rendimentoAnual;
    double valorInvestido;
    QDate* dataRetorno;

    double calcularRendimentoMensal();
    int calcularNumeroMesesInvestimento();
    double calcularRetorno(double valorRendido);
    double calcularValorRendido(double rendimentoMensal, int numeroMesesInvestimento);
    virtual double deduzirImposto(double valorFinalSemImposto, double valorRendido) = 0;

public:
    Investimento(double rAnual, double vInvestido, QDate* dtRetorno);

    double getRendimentoAnual() { return rendimentoAnual; }
    double getValorInvestido() { return valorInvestido; }
    QDate* getDataRetorno() { return dataRetorno; }

    void setRendimentoAnual(double r);
    void setValorInvestido(double v);
    void setDataRetorno(QDate* dt);

    double calcular();
};


#endif // INVESTIMENTO_H
