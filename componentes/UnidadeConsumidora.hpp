#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include "Endereco.hpp"
#include "Fatura.hpp"
#include <string>
#include <vector>

class UnidadeConsumidora {
  private:
    int codigoDaUnidadeConsumidora;
    std::string tipoDeUnidadeConsumidora;
    static int codigosParaAsUnidadesConsumidoras;
    double consumoAcumuladoDeEnergiaAtual = 0.0;
    double consumoAcumuladoDeEnergiaAnterior = 0.0;
    std::vector<Fatura*> faturasDaUnidadeConsumidora;
    void incrementarTotalDeCodigosDasUnidadesConsumidoras();
    Endereco* enderecoDaUnidadeConsumidora;
    bool fornecimentoEnergia = 0;
  public:
  // Construtor e destrutor
    UnidadeConsumidora(std::string, Endereco*);
    ~UnidadeConsumidora();
  // Getters
    int obterCodigoDaUnidadeConsumidora() const;
    std::string obterTipoDeUnidadeConsumidora() const;
    int obterCodigosParaAsUnidadesConsumidoras() const;
    void obterEnderecoCompletoDaUnidadeConsumidora() const;
    std::string obterLatitudeDoEnderecoCompletoDaUnidadeConsumidora() const;
    std::string obterLongitudeDoEnderecoCompletoDaUnidadeConsumidora() const;
    double obterConsumoAcumuladoDeEnergiaAtual() const;
    double obterConsumoAcumuladoDeEnergiaAnterior() const;
  //Setters
    void definirTipoDeUnidadeConsumidora(std::string);
    void vincularFaturaUnidadeConsumidora(Fatura*);
    void definirConsumoAcumuladoDeEnergiaAtual(double);
    void definirConsumoAcumuladoDeEnergiaAnterior(double);
    void emitirFatura();
    void imprimirFaturas() const;
};

#endif