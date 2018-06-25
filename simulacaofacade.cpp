#include "simulacaofacade.h"


QString SimulacaoFacade::compararInvestimentoEFinanciamento(Investimento *investimento, Financiamento *financiamento)
{
    double valorFinanciado = financiamento->getValorTotalFinanciado();
    double valorFinalInvestimento = investimento->calcular();
    QString mensagem;

    if(valorFinanciado<= valorFinalInvestimento)
    {
        mensagem = "É mais vantajoso comprar financiado.";
    }
    else
    {
        mensagem = "É mais vantajoso comprar à vista.";
    }

    mensagem += "\nValor final financiado: R$" + QString::number(valorFinanciado);
    mensagem += "\nValor final investimento no mesmo período: R$" + QString::number(valorFinalInvestimento);

    return mensagem;
}
