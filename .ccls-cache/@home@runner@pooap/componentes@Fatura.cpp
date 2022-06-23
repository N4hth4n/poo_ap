#include "Fatura.hpp"

Fatura::Fatura(double consumoAtualDaUnidade, double valorDaFatura) : consumoAtualDaUnidade(consumoAtualDaUnidade), valorDaFatura(valorDaFatura) {};

double Fatura::obterConsumoAtualDaUnidade() {
  return this->consumoAtualDaUnidade;
};

double Fatura::obterValorDaFatura() {
  return this->valorDaFatura;
};