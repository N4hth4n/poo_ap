#include "Endereco.hpp"

Endereco::Endereco(std::string logradouro, std::string numero, std::string bairro, std::string complemento, std::string cep, std::string cidade, std::string estado, std::string latitude, std::string longitude) {
  logradouroDoEndereco = logradouro;
  numeroDoEndereco = numero;
  bairroDoEndereco = bairro;
  complementoDoEndereco = complemento;
  cepDoEndereco = cep;
  cidadeDoEndereco = cidade;
  estadoDoEndereco = estado;
  definirLatitude(latitude);
  definirLongitude(longitude);
};

void Endereco::atualizarEnderecoCompleto(std::string logradouro, std::string numero, std::string bairro, std::string complemento, std::string cep, std::string cidade, std::string estado, std::string latitude, std::string longitude) {
  logradouroDoEndereco = logradouro;
  numeroDoEndereco = numero;
  bairroDoEndereco = bairro;
  complementoDoEndereco = complemento;
  cepDoEndereco = cep;
  cidadeDoEndereco = cidade;
  estadoDoEndereco = estado;
  definirLatitude(latitude);
  definirLongitude(longitude);
};

void Endereco::obterEnderecoCompleto() const {
  std::cout << "Endereço: "
    << this->obterLogradouroDoEndereco() << ", "
    << this->obterNumeroDoEndereco() << ", "
    << this->obterComplementoDoEndereco() << ", "
    << this->obterBairroDoEndereco() << ", "
    << this->obterCepDoEndereco() << ", "
    << this->obterCidadeDoEndereco() << "/"
    << this->obterEstadoDoEndereco() << "."
    << std::endl
    << "Latitude: "
    << obterLatitudeEndereco()
    << ". Longitude: "
    << obterLongitudeEndereco()
    << "."
    << std::endl;
};

std::string Endereco::obterLatitudeEndereco() const {
  return obterLatitude();
};

std::string Endereco::obterLongitudeEndereco() const {
  return obterLongitude();
};

std::string Endereco::obterLogradouroDoEndereco() const {
  return this->logradouroDoEndereco;
};

std::string Endereco::obterNumeroDoEndereco() const {
  return this->numeroDoEndereco;
};

std::string Endereco::obterComplementoDoEndereco() const {
  return this->complementoDoEndereco;
};

std::string Endereco::obterCepDoEndereco() const {
  return this->cepDoEndereco;
};

std::string Endereco::obterCidadeDoEndereco() const {
  return this->cidadeDoEndereco;
};

std::string Endereco::obterEstadoDoEndereco() const {
  return this->estadoDoEndereco;
};