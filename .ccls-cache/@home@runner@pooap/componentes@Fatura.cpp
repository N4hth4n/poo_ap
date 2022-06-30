#include "Fatura.hpp"

Data aux;

Fatura::Fatura(double consumoAtualDaUnidade, double valorDaFatura, double juros) : consumoAtualDaUnidade(consumoAtualDaUnidade), valorDaFatura(valorDaFatura), valorJuros( juros),statusPagamento(false), dataDeEmissaoDaFatura(aux.dateNow()), dataDeVencimentoDaFatura(aux.dateNow().getTicks() + 2592000) {};

double Fatura::obterConsumoAtualDaUnidade() {
  return this->consumoAtualDaUnidade;
};

double Fatura::obterValorDaFatura() {
  calculaJuros();
  return this->valorDaFatura;
};

bool Fatura::obterStatusPagamento(){
  return this->statusPagamento;
};

Data Fatura::obterDataDeEmissaoDaFatura(){
  return this->dataDeEmissaoDaFatura;
};

Data Fatura::obterDataDeVencimentoDaFatura(){
  return this->dataDeVencimentoDaFatura;
};

void Fatura::calculaJuros(){
  if(aux.dateNow() > this->dataDeVencimentoDaFatura){
    double n = (aux.dateNow().getTicks() - this->dataDeVencimentoDaFatura.getTicks())/86400;
    this->valorDaFatura += (this->valorDaFatura * this->valorJuros * n);
  }
};