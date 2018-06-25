#include "investimento.h"
#include <iostream>

using namespace std;

Investimento::Investimento(double rAnual, double vInvestido, QDate* dtRetorno)
{
    setRendimentoAnual(rAnual);
    setValorInvestido(vInvestido);
    setDataRetorno(dtRetorno);
}

void Investimento::setRendimentoAnual(double r)
{
    rendimentoAnual = r;
}

void Investimento::setValorInvestido(double v)
{
    valorInvestido = v;
}

void Investimento::setDataRetorno(QDate* dt)
{
    dataRetorno = dt;
}

double Investimento::calcularRendimentoMensal()
{
    double rendimentoMensal = rendimentoAnual / 12;
    return rendimentoMensal;
}

int Investimento::calcularNumeroMesesInvestimento()
{
    QDate* dataAtual = new QDate(QDate::currentDate());

    int months = (dataRetorno->year() - dataAtual->year())*12 + dataRetorno->month() - dataAtual->month();

    return months;
}

double Investimento::calcularRetorno(double valorRendido)
{
    double valorFinal = valorInvestido + valorRendido;

    return valorFinal;
}

double Investimento::calcularValorRendido(double rendimentoMensal, int numeroMesesInvestimento)
{
    double valorRendido = valorInvestido * rendimentoMensal * numeroMesesInvestimento;

    return valorRendido;
}

double Investimento::calcular()
{
    double rendimentoMensal = calcularRendimentoMensal();
    int numeroMesesInvestimento = calcularNumeroMesesInvestimento();
    double valorRendido = calcularValorRendido(rendimentoMensal, numeroMesesInvestimento);
    double valorFinalSemImposto = calcularRetorno(valorRendido);
    double valorDeduzido = deduzirImposto(valorFinalSemImposto, valorRendido);

    return valorDeduzido;
}
