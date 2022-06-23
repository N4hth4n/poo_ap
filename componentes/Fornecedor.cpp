#include "Fornecedor.hpp"

// Construtores, destrutores e Singleton

Fornecedor* Fornecedor::ponteiroInstanciaFornecedor = 0;

Fornecedor* Fornecedor::Instanciar() {
  if (ponteiroInstanciaFornecedor == 0) {
    ponteiroInstanciaFornecedor = new Fornecedor();
  }
  return(ponteiroInstanciaFornecedor);
};

Fornecedor::~Fornecedor() {
  std::cout << "Objeto Fornecedor destruído" << std::endl;
};

// Getters

std::string Fornecedor::obterNomeDoFornecedor() const {
  return this->nomeDoFornecedor;
};

int Fornecedor::obterBandeiraTarifaria() const {
  return this->bandeiraTarifaria;
};

// Setters

void Fornecedor::definirNomeDoFornecedor(std::string novoNomeDoFornecedor) {
  this->nomeDoFornecedor = novoNomeDoFornecedor;
};

void Fornecedor::definirBandeiraTarifaria(int novaBandeiraTarifaria) {
  this->bandeiraTarifaria = novaBandeiraTarifaria;
};

void Fornecedor::adicionarClienteListaDeTodosOsClientesDaFornecedora(Cliente* novoClienteDaFornecedora) {
  todosOsClientesDaFornecedora.push_back(novoClienteDaFornecedora);
  std::cout << novoClienteDaFornecedora->obterNomeDoUsuario() 
    << " adicionado à carteira de clientes da fornecedora "
    << this->nomeDoFornecedor
    << "."
    << std::endl;
};