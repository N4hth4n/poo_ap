#include "Cliente.hpp"

Cliente::Cliente(std::string nomeAtribuidoAoCliente, CpfCnpj* codigoClienteCadastrado, UnidadeConsumidora* primeiraUnidadeConsumidoraDoCliente, Endereco* enderecoDoCliente, Permissao* permissaoDoCliente) {
  definirNomeDoUsuario(nomeAtribuidoAoCliente);
  definirIdDoUsuario();
  this->cadastroPessoaCliente = codigoClienteCadastrado;
  unidadesConsumidorasDoCliente.push_back(primeiraUnidadeConsumidoraDoCliente);
  this->enderecoDoCliente = enderecoDoCliente;
  this->permissaoDoCliente = permissaoDoCliente;
  std::cout << "Cliente " << obterNomeDoUsuario()
    << ", ID n. "
    << obterIdDoUsuario()
    << " e "
    << cadastroPessoaCliente->obterTipo()
    << " n. "
    << cadastroPessoaCliente->obterCodigo()
    << ","
    << " criado!"
    << std::endl
    << "Unidade consumidora de código n. "
    << (unidadesConsumidorasDoCliente.at(0))->obterCodigoDaUnidadeConsumidora()
    << " efetivamente vinculada ao cliente."
    << std::endl
    << "Permissao de nível "
    << obterPermissaoDoCliente()
    << "."
    << std::endl;
};

Cliente::~Cliente() {
  std::cout << "Cliente " + obterNomeDoUsuario() + " descadastrado!" << std::endl;
};

void Cliente::definirEstadoDeInadimplenciaDoCliente(bool clienteInadimplente) {
  this->clienteInadimplente = clienteInadimplente;
};

bool Cliente::obterEstadoDeInadimplenciaDoCliente() const {
  return this->clienteInadimplente;
};

void Cliente::vincularUnidadeConsumidoraAoCliente(UnidadeConsumidora* novaUnidadeConsumidora) {
  unidadesConsumidorasDoCliente.push_back(novaUnidadeConsumidora);
  std::cout << "Nova unidade vinculada com sucesso!" << std::endl; 
  novaUnidadeConsumidora->obterEnderecoCompletoDaUnidadeConsumidora();
  std::cout << "Lista de unidades vinculadas ao cliente " 
    << obterNomeDoUsuario()
    << ":"
    << std::endl;
  for (auto unidadeConsumidora : unidadesConsumidorasDoCliente) {
    std::cout << "Unidade consumidora de código n. "
      << unidadeConsumidora->obterCodigoDaUnidadeConsumidora()
      << std::endl;
  }
};

std::string Cliente::obterCpfOuCnpjDoCliente() const {
  return this->cadastroPessoaCliente->obterCodigo();
}

void Cliente::obterEnderecoCompletoDoCliente() const {
 return this->enderecoDoCliente->obterEnderecoCompleto();
};

std::string Cliente::obterLatitudeDoEnderecoCompletoDoCliente() const {
  return this->enderecoDoCliente->obterLatitudeEndereco();
};

std::string Cliente::obterLongitudeDoEnderecoCompletoDoCliente() const {
  return this->enderecoDoCliente->obterLongitudeEndereco();
};

int Cliente::obterPermissaoDoCliente() const {
  return permissaoDoCliente->obterTipoDePermissaoDoUsuario();
};