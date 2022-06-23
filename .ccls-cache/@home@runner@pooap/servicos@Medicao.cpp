#include "Medicao.hpp"

Medicao::Medicao(UnidadeConsumidora* unidadeConsumidoraDoServico, double quantidadeConsumoMedida) : unidadeConsumidoraObjetoDoServico(unidadeConsumidoraDoServico), valorDaLeitura(quantidadeConsumoMedida) {};

Medicao::~Medicao() {};