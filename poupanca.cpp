#include "poupanca.h"

Poupanca::Poupanca(double rAnual, double vInvestido, QDate* dtRetorno) : Investimento(rAnual, vInvestido, dtRetorno)
{}

double Poupanca::deduzirImposto(double valorFinalSemImposto, double valorRendido)
{
    return valorFinalSemImposto;
}
