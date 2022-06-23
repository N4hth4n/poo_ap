#ifndef SERVICO_H
#define SERVICO_H

#include <string>

class Servico {
  private:
    //Data dataDaExecucao;
    std::string horarioDaExecucao;
    int codigoDoServico;
  public:
  // Getters
    std::string obterHorarioDaExecucao();
    //Data obterDataDaExecucao();
    int obterCodigoDoServico();
  // Setters
    void definirHorarioDaExecucao(std::string);
    // void definirDataDaExecucao(Data);
};

#endif