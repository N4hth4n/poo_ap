#ifndef FATURA_H
#define FATURA_H

class Fatura {
  private:
    double consumoAtualDaUnidade;
    double valorDaFatura;
    //Data dataDeEmissaoDaFatura;
  public:
  // Construtor e destrutor
    Fatura(double, double);
    ~Fatura();
  // Getters
    double obterConsumoAtualDaUnidade();
    double obterValorDaFatura();
};

#endif