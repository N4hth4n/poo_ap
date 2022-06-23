#include "Usuario.hpp"

int Usuario::totalDeUsuarios = 0;

std::string Usuario::obterNomeDoUsuario() const {
  return this->nomeDoUsuario;
};

int Usuario::obterIdDoUsuario() const {
  return this->idDoUsuario;
};

void Usuario::definirNomeDoUsuario(std::string nomeAtribuidoAoUsuario) {
  this->nomeDoUsuario = nomeAtribuidoAoUsuario;
};

int Usuario::obterTotalDeUsuarios() const {
  return this->totalDeUsuarios;
}

void Usuario::definirIdDoUsuario() {
  incrementarTotalDeUsuarios();
  this->idDoUsuario = obterTotalDeUsuarios();
}

void Usuario::incrementarTotalDeUsuarios() {
  totalDeUsuarios++;
}