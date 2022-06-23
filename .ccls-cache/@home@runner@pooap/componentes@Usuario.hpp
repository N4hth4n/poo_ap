#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <vector>

class Usuario {
  private:
    std::string nomeDoUsuario;
    static int totalDeUsuarios;
    int idDoUsuario;
    void incrementarTotalDeUsuarios();
  public:
  // Getters
  int obterIdDoUsuario() const;
  int obterTotalDeUsuarios() const;
  std::string obterNomeDoUsuario() const;
  // int obterPermissaoDoUsuario() const;
  // Setters
  void definirNomeDoUsuario(std::string);
  void definirIdDoUsuario();
};

#endif