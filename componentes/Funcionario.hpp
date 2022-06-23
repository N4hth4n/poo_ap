#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Usuario.hpp"
#include "../servicos/Medicao.hpp"

class Funcionario : public Usuario {
  private:
    int tarefasDoDia = 0;
  public:
  // Construtor e destrutor
    Funcionario(std::string);
    ~Funcionario();
  // Getters
    void imprimirRelatorioDeServicosExecutados();
  // Funções para execução dos serviços
    void executarServicoDeMedicao(Medicao*);
};

#endif