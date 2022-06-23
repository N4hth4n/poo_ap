#include "LocalizacaoGeografica.hpp"

void LocalizacaoGeografica::definirLatitude(std::string latitudeAtribuidaAoImovel) {
  this->latitude = latitudeAtribuidaAoImovel;
};

void LocalizacaoGeografica::definirLongitude(std::string longitudeAtribuidaAoImovel) {
  this->longitude = longitudeAtribuidaAoImovel;
};

std::string LocalizacaoGeografica::obterLatitude() const {
  return this->latitude;
};

std::string LocalizacaoGeografica::obterLongitude() const {
  return this->longitude;
};