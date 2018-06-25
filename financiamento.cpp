#include "financiamento.h"

Financiamento::Financiamento(int nVezes, double vParcela)
{
    setNumeroVezes(nVezes);
    setValorParcela(vParcela);
    setValorTotalFinanciado(nVezes, vParcela);
}

void Financiamento::setNumeroVezes(int n)
{
    numeroVezes = n;
}

void Financiamento::setValorParcela(double v)
{
    valorParcela = v;
}

void Financiamento::setValorTotalFinanciado(int nVezes, double vParcela)
{
    valorTotalFinanciado = nVezes * vParcela;
}

