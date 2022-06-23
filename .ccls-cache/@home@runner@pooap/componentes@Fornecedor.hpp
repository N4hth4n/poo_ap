#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include <iostream>
#include <string>
#include <vector>
#include "Cliente.hpp"

class Fornecedor {
  private:
    std::string nomeDoFornecedor;
    int bandeiraTarifaria; // 1 (verde), 2 (amarela), 3 (vermelha patamar 1), 4 (vermelha patamar 2)
  // Mais infor: https://www.gov.br/aneel/pt-br/assuntos/tarifas/bandeiras-tarifarias
  // Singleton
    Fornecedor() {};
    static Fornecedor* ponteiroInstanciaFornecedor;
    std::vector<Cliente*> todosOsClientesDaFornecedora;
    std::vector<Cliente*> clientesInadimplentesDaFornecedora;
  public:
  // Continuando configuração do singleton
    static Fornecedor* Instanciar();
  // Destrutor
    ~Fornecedor();
  // Getters
    std::string obterNomeDoFornecedor() const;
    int obterBandeiraTarifaria() const;
  // Setters
    void definirNomeDoFornecedor(std::string);
    void definirBandeiraTarifaria(int);
    // Setters relacionados ao vetor com todos os clientes
    void adicionarClienteListaDeTodosOsClientesDaFornecedora(Cliente*);
};

#endif