#ifndef ENDERECO_H
#define ENDERECO_H

#include "../classesAuxiliares/LocalizacaoGeografica.hpp"
#include <iostream>

class Endereco : public LocalizacaoGeografica {
  private:
    std::string logradouroDoEndereco;
    std::string numeroDoEndereco;
    std::string bairroDoEndereco;
    std::string complementoDoEndereco;
    std::string cepDoEndereco;
    std::string cidadeDoEndereco;
    std::string estadoDoEndereco;
  public:
  // Construtor e destrutor
    Endereco(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    ~Endereco();
  // Setters
    void atualizarEnderecoCompleto(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
  // Getters
    std::string obterLogradouroDoEndereco() const;
    std::string obterNumeroDoEndereco() const;
    std::string obterBairroDoEndereco() const;
    std::string obterComplementoDoEndereco() const;
    std::string obterCepDoEndereco() const;
    std::string obterCidadeDoEndereco() const;
    std::string obterEstadoDoEndereco() const;
    void obterEnderecoCompleto() const;
    std::string obterLongitudeEndereco() const;
    std::string obterLatitudeEndereco() const;
};

#endif