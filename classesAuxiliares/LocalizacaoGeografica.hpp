#ifndef LOCALIZACAOGEOGRAFICA_H
#define LOCALIZACAOGEOGRAFICA_H

#include <string>

class LocalizacaoGeografica {
  private:
    std::string latitude;
    std::string longitude;
  public:
    //Getters
    std::string obterLatitude() const;
    std::string obterLongitude() const;
    //Setters
    void definirLatitude(std::string);
    void definirLongitude(std::string);
};

#endif