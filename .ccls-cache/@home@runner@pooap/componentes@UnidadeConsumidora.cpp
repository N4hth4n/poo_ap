#include "UnidadeConsumidora.hpp"

int UnidadeConsumidora::codigosParaAsUnidadesConsumidoras = 0;

UnidadeConsumidora::UnidadeConsumidora(std::string tipoAtribuidoUnidadeConsumidora, Endereco* enderecoAtribudidoUnidadeConsumidora) {
  this->tipoDeUnidadeConsumidora = tipoAtribuidoUnidadeConsumidora;
  incrementarTotalDeCodigosDasUnidadesConsumidoras();
  this->codigoDaUnidadeConsumidora = obterCodigosParaAsUnidadesConsumidoras() + 9100; // 9100 é aleatório
  this->enderecoDaUnidadeConsumidora = enderecoAtribudidoUnidadeConsumidora;
};

UnidadeConsumidora::~UnidadeConsumidora() {};

void UnidadeConsumidora::definirTipoDeUnidadeConsumidora(std::string tipoAtribuidoUnidadeConsumidora) {
  this->tipoDeUnidadeConsumidora = tipoAtribuidoUnidadeConsumidora;
};

int UnidadeConsumidora::obterCodigosParaAsUnidadesConsumidoras() const {
  return this->codigosParaAsUnidadesConsumidoras;
};

void UnidadeConsumidora::incrementarTotalDeCodigosDasUnidadesConsumidoras() {
  codigosParaAsUnidadesConsumidoras++;
};

int UnidadeConsumidora::obterCodigoDaUnidadeConsumidora() const {
  return this->codigoDaUnidadeConsumidora;
};

void UnidadeConsumidora::obterEnderecoCompletoDaUnidadeConsumidora() const {
 return this->enderecoDaUnidadeConsumidora->obterEnderecoCompleto();
};

std::string UnidadeConsumidora::obterLatitudeDoEnderecoCompletoDaUnidadeConsumidora() const {
  return this->enderecoDaUnidadeConsumidora->obterLatitudeEndereco();
};

std::string UnidadeConsumidora::obterLongitudeDoEnderecoCompletoDaUnidadeConsumidora() const {
  return this->enderecoDaUnidadeConsumidora->obterLongitudeEndereco();
};

void UnidadeConsumidora::vincularFaturaUnidadeConsumidora(Fatura* faturaEmitida) {
  faturasDaUnidadeConsumidora.push_back(faturaEmitida);
};

double UnidadeConsumidora::obterConsumoAcumuladoDeEnergiaAtual() const {
  return this->consumoAcumuladoDeEnergiaAtual;
};

void UnidadeConsumidora::definirConsumoAcumuladoDeEnergiaAtual(double consumoMedidoPeloFuncionario) {
  consumoAcumuladoDeEnergiaAnterior = consumoAcumuladoDeEnergiaAtual;
  consumoAcumuladoDeEnergiaAtual = consumoMedidoPeloFuncionario;
  std::cout << "O consumo total da unidade de código n. "
    << this->obterCodigoDaUnidadeConsumidora()
    << " foi atualizado para "
    << consumoAcumuladoDeEnergiaAtual
    << " kWh."
    << std::endl;
};

double UnidadeConsumidora::obterConsumoAcumuladoDeEnergiaAnterior() const {
  return this->consumoAcumuladoDeEnergiaAnterior;
};

void UnidadeConsumidora::emitirFatura() {
  double valorkWh = 0.35;
  double consumo = this->obterConsumoAcumuladoDeEnergiaAtual() - this->obterConsumoAcumuladoDeEnergiaAnterior();
  double valorDevido = valorkWh * consumo;
  Fatura* faturaResultante = new Fatura(consumo, valorDevido, 1);
  this->vincularFaturaUnidadeConsumidora(faturaResultante);
  std::cout << "Fatura no valor de R$ "
    << valorDevido
    << " emitida com sucesso!"
    << std::endl;
};

void UnidadeConsumidora::imprimirFaturas() const {
  for (auto faturas : this->faturasDaUnidadeConsumidora) {
    std::cout << "Fatura no valor de R$ " << faturas->obterValorDaFatura() << " encontrada." << std::endl;
    std::cout << "Data de emissão da fatura: ";
    faturas->obterDataDeEmissaoDaFatura().printData();
    std::cout << "Data de vencimento da fatura: ";
    faturas->obterDataDeVencimentoDaFatura().printData();
    if(faturas->obterStatusPagamento() == true) std::cout << "Fatura Paga" << std::endl;
    else std::cout << "Fatura Pendente" << std::endl;
  }
};