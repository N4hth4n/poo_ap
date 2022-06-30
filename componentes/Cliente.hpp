#ifndef CLIENTE_H
#define CLIENTE_H

#include "Usuario.hpp"
#include "../classesAuxiliares/CpfCnpj.hpp"
#include "UnidadeConsumidora.hpp"
#include "Endereco.hpp"
#include "../classesAuxiliares/Permissao.hpp"

class Cliente : public Usuario {
  private:
    CpfCnpj* cadastroPessoaCliente;
    std::vector<UnidadeConsumidora*> unidadesConsumidorasDoCliente;
    Endereco* enderecoDoCliente;
    bool clienteInadimplente;
    Permissao* permissaoDoCliente;
  public:
    Cliente(std::string, CpfCnpj*, UnidadeConsumidora*, Endereco*, Permissao*);
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
    int obterPermissaoDoCliente() const;
};

#endif