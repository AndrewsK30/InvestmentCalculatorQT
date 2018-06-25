#include "tesouroselic.h".h"

TesouroSelic::TesouroSelic(double rAnual, double vInvestido, QDate* dtRetorno) : Investimento(rAnual, vInvestido, dtRetorno)
{}

double TesouroSelic::deduzirImposto(double valorFinalSemImposto, double valorRendido)
{
    int numeroDiasInvestimento = getDataRetorno()->daysTo(QDate::currentDate());

    double taxaTributacao;

    if(numeroDiasInvestimento <= 180)
    {
        taxaTributacao = 0.225;
    }
    else if(numeroDiasInvestimento <= 360)
    {
        taxaTributacao = 0.2;
    }
    else if(numeroDiasInvestimento <= 720)
    {
        taxaTributacao = 0.175;
    }
    else
    {
        taxaTributacao = 0.15;
    }

    return valorFinalSemImposto - (valorRendido * taxaTributacao);
}
