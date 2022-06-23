#ifndef MEDICAO_H
#define MEDICAO_H

#include "Servico.hpp"
#include "../componentes/UnidadeConsumidora.hpp"

class Medicao : public Servico {
  public:
    UnidadeConsumidora* unidadeConsumidoraObjetoDoServico;
    double valorDaLeitura;
  // Construtor e destrutor
    Medicao(UnidadeConsumidora*, double);
    ~Medicao();
};

#endif