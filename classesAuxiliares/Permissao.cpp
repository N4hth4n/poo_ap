#ifndef PERMISSAO_H
#define PERMISSAO_H

#include <string>

class Permissao {
  private:
    int tipoDePermissaoDoUsuario;
    // Cliente tem permissão tipo 1
    // Leiturista tem permissão tipo 2
    // Eletricista tem permissão tipo 3
  public:
    Permissao(int);
    ~Permissao();
    //Getters
    int obterTipoDePermissaoDoUsuario();
    //Setters
    void definirNovoTipoDePermissaoDoUsuario(int);
};

#endif