#ifndef FATURA_H
#define FATURA_H
#include "../classesAuxiliares/Classe Data/Data.h"

class Fatura {
  private:
    double consumoAtualDaUnidade;
    double valorDaFatura;
    double valorJuros;
    bool statusPagamento;//1-Pago;0-Nao Pago.
    Data dataDeEmissaoDaFatura;
    Data dataDeVencimentoDaFatura;
  public:
  // Construtor e destrutor
    Fatura(double, double, double);
    ~Fatura();
  // Getters
    double obterConsumoAtualDaUnidade();
    double obterValorDaFatura();
    bool obterStatusPagamento();
    Data obterDataDeEmissaoDaFatura();
    Data obterDataDeVencimentoDaFatura();
  //outros:
    void calculaJuros();
};

#endif