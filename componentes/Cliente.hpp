#ifndef CLIENTE_H
#define CLIENTE_H

#include "Usuario.hpp"
#include "../classesAuxiliares/CpfCnpj.hpp"
#include "UnidadeConsumidora.hpp"
#include "Endereco.hpp"

class Cliente : public Usuario {
  private:
    CpfCnpj* cadastroPessoaCliente;
    std::vector<UnidadeConsumidora*> unidadesConsumidorasDoCliente;
    Endereco* enderecoDoCliente;
    bool clienteInadimplente;
  public:
    Cliente(std::string, CpfCnpj*, UnidadeConsumidora*, Endereco*);
    ~Cliente();
  // Setters
    void definirEstadoDeInadimplenciaDoCliente(bool);
    void vincularUnidadeConsumidoraAoCliente(UnidadeConsumidora*);
  // Getters
    bool obterEstadoDeInadimplenciaDoCliente() const;
    std::string obterCpfOuCnpjDoCliente() const;
    void obterEnderecoCompletoDoCliente() const;
    std::string obterLatitudeDoEnderecoCompletoDoCliente() const;
    std::string obterLongitudeDoEnderecoCompletoDoCliente() const;
};

#endif