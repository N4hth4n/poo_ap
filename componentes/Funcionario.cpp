#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nomeAtribuidoAoFuncionario) {
  definirNomeDoUsuario(nomeAtribuidoAoFuncionario);
};

void Funcionario::executarServicoDeMedicao(Medicao* medicaoRealizada) {
  medicaoRealizada->unidadeConsumidoraObjetoDoServico->definirConsumoAcumuladoDeEnergiaAtual(medicaoRealizada->valorDaLeitura);
  medicaoRealizada->unidadeConsumidoraObjetoDoServico->emitirFatura();
};