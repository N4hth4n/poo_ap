#ifndef CPFCNPJ_H
#define CPFCNPJ_H

#include <iostream>
#include <string>

class CpfCnpj {
  private:
    std::string codigo;
    std::string tipo;
    bool validaCPF (std::string);
    bool validaCNPJ (std::string);
  public:
// Construtor e destrutor
    CpfCnpj(std::string);
    ~CpfCnpj();
//Gets:
    std::string obterCodigo();
    std::string obterTipo();
};
#endif