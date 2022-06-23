#include "CpfCnpj.hpp"

CpfCnpj::CpfCnpj(std::string cpfOuCnpjDigitado) {
  if(validaCPF(cpfOuCnpjDigitado)){
    this->codigo = cpfOuCnpjDigitado;
    this->tipo = "CPF";
  }
  else if(validaCNPJ(cpfOuCnpjDigitado)) {
    this->codigo = cpfOuCnpjDigitado;
    this->tipo = "CNPJ";
  }
  else {
    this->codigo = "";
    this->tipo = "invalido";
  }
};

CpfCnpj::~CpfCnpj() {};

bool CpfCnpj::validaCPF (std::string cpf) {
  //Declarando Variáveis
  int soma1, soma2, parte1, parte2, parte3;
  int parte5, parte6, parte7; 
  int dig1, dig2, i, j, erro=0;
  char temp[11];
  int CPF[11];
  std::string aux;

  for(j = 0; j < cpf.length(); j++) {
    if ( isdigit(cpf[j]) ){
      aux.push_back(cpf[j]);
    }
  }

//"Pegando" o CPF da Tela.
  for (int i=1; i<=11; i++) {
    std::cout << "";
    temp[0] = aux[i-1];
    CPF[i] = atoi (temp);
    temp[0] = ' ';
  }

//Calculo do Primeiro Dígito
  soma1 =((CPF[1]*10) +
    (CPF[2] * 9) + 
    (CPF[3] * 8) +
    (CPF[4] * 7) +
    (CPF[5] * 6) +
    (CPF[6] * 5) +
    (CPF[7] * 4) +
    (CPF[8] * 3) +
    (CPF[9] * 2));
             
  parte1 = int(soma1 / 11);
  parte2 = (parte1 * 11);
  parte3 = (soma1 - parte2);
  dig1   = ( 11 - parte3);
  
  if (dig1 > 9) dig1 = 0;

// Calculo do Segundo Dígito
  soma2 =((CPF[1]*11) +
    (CPF[2] * 10) +
    (CPF[3] * 9) +
    (CPF[4] * 8) +
    (CPF[5] * 7) +
    (CPF[6] * 6) +
    (CPF[7] * 5) +
    (CPF[8] * 4) +
    (CPF[9] * 3) +
    (dig1 * 2));
             
  parte5 = int(soma2 / 11);
  parte6 = (parte5 * 11);
  parte7 = (soma2 - parte6);
  dig2   = (11 - parte7);
  
  if (dig2 > 9) dig2 = 0;

//Invalida CPF com todos os d�gitos iguais.
  
    
  if (dig1 == CPF[10] && dig2 == CPF[11]) {
     if(CPF[1]==1 && CPF[2]==1 && CPF[3]==1 && CPF[4]==1 && CPF[5]==1 
     && CPF[6]==1 && CPF[7]==1 && CPF[8]==1 && CPF[9]==1)
      erro++;        
     else if(CPF[1]==2 && CPF[2]==2 && CPF[3]==2 && CPF[4]==2 && CPF[5]==2 
     && CPF[6]==2 && CPF[7]==2 && CPF[8]==2 && CPF[9]==2)
      erro++;
     else if(CPF[1]==3 && CPF[2]==3 && CPF[3]==3 && CPF[4]==3 && CPF[5]==3 
     && CPF[6]==3 && CPF[7]==3 && CPF[8]==3 && CPF[9]==3)
      erro++;
     else if(CPF[1]==4 && CPF[2]==4 && CPF[3]==4 && CPF[4]==4 && CPF[5]==4 
     && CPF[6]==4 && CPF[7]==4 && CPF[8]==4 && CPF[9]==4)
      erro++;
     else if(CPF[1]==5 && CPF[2]==5 && CPF[3]==5 && CPF[4]==5 && CPF[5]==5 
     && CPF[6]==5 && CPF[7]==5 && CPF[8]==5 && CPF[9]==5)
      erro++;
     else if(CPF[1]==6 && CPF[2]==6 && CPF[3]==6 && CPF[4]==6 && CPF[5]==6 
     && CPF[6]==6 && CPF[7]==6 && CPF[8]==6 && CPF[9]==6)
      erro++;
     else if(CPF[1]==7 && CPF[2]==7 && CPF[3]==7 && CPF[4]==7 && CPF[5]==7 
     && CPF[6]==7 && CPF[7]==7 && CPF[8]==7 && CPF[9]==7)
      erro++;
     else if(CPF[1]==8 && CPF[2]==8 && CPF[3]==8 && CPF[4]==8 && CPF[5]==8 
     && CPF[6]==8 && CPF[7]==8 && CPF[8]==8 && CPF[9]==8)
      erro++;
     else if(CPF[1]==9 && CPF[2]==9 && CPF[3]==9 && CPF[4]==9 && CPF[5]==9 
     && CPF[6]==9 && CPF[7]==9 && CPF[8]==9 && CPF[9]==9)
      erro++;
     else if(CPF[1]==0 && CPF[2]==0 && CPF[3]==0 && CPF[4]==0 && CPF[5]==0 
     && CPF[6]==0 && CPF[7]==0 && CPF[8]==0 && CPF[9]==0)
      erro++;
    
// Informa CPF Valido, e estado de Emissao.
    
    if (erro==0) {
        return true;
      }
    } else {
        return false;
      }
    }

bool CpfCnpj::validaCNPJ (std::string cnpj){
//Declarando Variáveis

  int soma1, soma2, parte1, parte2, parte3, parte4; 
  int parte5, parte6, parte7, dig1, dig2, i, j, erro=0;
  char temp[14];
  int CNPJ[14];
  std::string aux;
  
  for (j = 0; j < cnpj.length(); j++) {
    if ( isdigit(cnpj[j]) ){
      aux.push_back(cnpj[j]);
    }
  }
  
//Entrando com o CNPJ

  for (int i=1; i<=14; i++) {
    std::cout << "";
    temp[0] = aux[i-1];
    CNPJ[i] = atoi (temp);
    temp[0] = ' ';
  }
  
//Calculo do Primeiro Digito

     soma1 =((CNPJ[1]* 5) +
      (CNPJ[2] * 4) +
      (CNPJ[3] * 3) +
      (CNPJ[4] * 2) +
      (CNPJ[5] * 9) +
      (CNPJ[6] * 8) +
      (CNPJ[7] * 7) +
      (CNPJ[8] * 6) +
      (CNPJ[9] * 5) +
      (CNPJ[10] * 4) +
      (CNPJ[11] * 3) +
      (CNPJ[12] * 2));

    parte1 = int(soma1 / 11);
    parte2 = (parte1 * 11);
    parte3 = (soma1 - parte2);
    dig1   = ( 11 - parte3);
  
    if (dig1 > 9) dig1 = 0;

// Calculo do Segundo Dígito

  soma2 =((CNPJ[1]* 6) +
    (CNPJ[2] * 5) +
    (CNPJ[3] * 4) +
    (CNPJ[4] * 3) +
    (CNPJ[5] * 2) +
    (CNPJ[6] * 9) +
    (CNPJ[7] * 8) +
    (CNPJ[8] * 7) +
    (CNPJ[9] * 6) +
    (CNPJ[10] * 5) +
    (CNPJ[11] * 4) +
    (CNPJ[12] * 3) +
    (dig1 * 2));
             
  parte5 = int(soma2 / 11);
  parte6 = (parte5 * 11);
  parte7 = (soma2 - parte6);
  dig2   = (11 - parte7);
     
  if (dig2 > 9) dig2 = 0;

//Validando e Escrevendo  
    
   if (dig1 == CNPJ[13] && dig2 == CNPJ[14])
     return true;
   else
     return false;
}

//Gets:
std::string CpfCnpj::obterCodigo(){
  return this->codigo;
}

std::string CpfCnpj::obterTipo(){
  return this->tipo;
}