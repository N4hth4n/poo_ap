#include "Permissao.hpp"

Permissao::Permissao(int permissaoAtribuidaNaCriacaoDoUsuario) : tipoDePermissaoDoUsuario(permissaoAtribuidaNaCriacaoDoUsuario) {};

int Permissao::obterTipoDePermissaoDoUsuario() {
  return this->tipoDePermissaoDoUsuario;
};

void Permissao::definirNovoTipoDePermissaoDoUsuario(int novaPermissaoDoUsuario) {
  this->tipoDePermissaoDoUsuario = novaPermissaoDoUsuario;
};