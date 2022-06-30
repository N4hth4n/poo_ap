#include <iostream>
#include "./componentes/Fornecedor.hpp"
#include "./componentes/Cliente.hpp"
#include "./componentes/UnidadeConsumidora.hpp"
#include "./componentes/Funcionario.hpp"
#include "./servicos/Medicao.hpp"

int main() {
  /* ------------------ Criando a fornecedora ------------------ */
  Fornecedor* Cemig = Fornecedor::Instanciar();
  Cemig->definirNomeDoFornecedor("CEMIG");
  std::cout << Cemig->obterNomeDoFornecedor() << std::endl;
  /* ----------------------------------------------------------- */

  std::cout << std::endl;
  
  /* ------------------- Criando os clientes ------------------- */
    // Cliente 01: Tício
  CpfCnpj* cadastroTicio = new CpfCnpj("089.898.866-78");
  Endereco* enderecoDoTicio = new Endereco("Rua dos Pica-Paus", "n. 100", "bairro Vila Clóris", "casa", "CEP n. 31744-186", "Belo Horizonte", "MG", "-19.8279329", "-43.9505145"); // O Tício reside na unidade consumidora
  UnidadeConsumidora* unidadeConsumidoraDoTicio = new UnidadeConsumidora("Residencial", enderecoDoTicio);
  Permissao* permissaoDoTicio = new Permissao(1);
  Cliente* Ticio = new Cliente("Tício de Oliveira", cadastroTicio, unidadeConsumidoraDoTicio, enderecoDoTicio, permissaoDoTicio);
  Ticio->obterEnderecoCompletoDoCliente();
  Cemig->adicionarClienteListaDeTodosOsClientesDaFornecedora(Ticio);
  
  std::cout << std::endl;
  
    // Cliente 02: Mévio
  CpfCnpj* cadastroMevio = new CpfCnpj("146.906.787-07");
  Endereco* enderecoDoMevio = new Endereco("Rua dos Bacuraus", "n. 56-A", "bairro Campo Alegre", "casa", "CEP n. 31730-230", "Belo Horizonte", "MG", "-19.8282189", "-43.9475182"); // O Mévio também reside na unidade consumidora
  UnidadeConsumidora* primeiraUnidadeConsumidoraDoMevio = new UnidadeConsumidora("Residencial", enderecoDoMevio);
  Permissao* permissaoDoMevio = new Permissao(1);
  Cliente* Mevio = new Cliente ("Mévio da Silva", cadastroMevio, primeiraUnidadeConsumidoraDoMevio, enderecoDoMevio, permissaoDoMevio);
  Mevio->obterEnderecoCompletoDoCliente();
  Cemig->adicionarClienteListaDeTodosOsClientesDaFornecedora(Mevio);
  
  std::cout << std::endl;
  
    // Cliente 03: Caio MEI
  CpfCnpj* cadastroCaioMei = new CpfCnpj("03.778.130/0001-48");
  Endereco* enderecoIndustrialDoCaioMei = new Endereco("Avenida Babita Camargos", "n. 1365", "bairro Industrial", "sem complemento", "CEP n. 31009-121", "Contagem", "MG", "-19.9544376", "-44.0561486");
  UnidadeConsumidora* unidadeConsumidoraDoCaioMei = new UnidadeConsumidora("Industrial", enderecoIndustrialDoCaioMei);
  Permissao* permissaoDoCaio = new Permissao(1);
  Cliente* CaioMei = new Cliente ("Caio MEI", cadastroCaioMei, unidadeConsumidoraDoCaioMei, enderecoIndustrialDoCaioMei, permissaoDoCaio);
  CaioMei->obterEnderecoCompletoDoCliente();
  Cemig->adicionarClienteListaDeTodosOsClientesDaFornecedora(CaioMei);
  
  std::cout << std::endl;
  /* ----------------------------------------------------------- */
  
  /* ----------- Manipulando as unidades dos clientes ---------- */
    // Criando nova unidade consumidora para o Mévio
  Endereco* enderecoComercialDoCaioMei = new Endereco("Rua Moura Costa", "n. 13", "bairro Planalto", "loja", "CEP n. 31720-110", "Belo Horizonte", "MG", "-19.8319787", "-43.9594599");
  UnidadeConsumidora* segundaUnidadeConsumidoraDoCaioMei = new UnidadeConsumidora("Comercial", enderecoComercialDoCaioMei);
  CaioMei->vincularUnidadeConsumidoraAoCliente(segundaUnidadeConsumidoraDoCaioMei);

  std::cout << std::endl;

  /* ------------------- Criando os funcionários ------------------- */
  Funcionario* funcionarioSeverino = new Funcionario("Severino Gonçalves");

  /* ------------------- Executando serviços ------------------- */
  Medicao* medicao01Severino = new Medicao(unidadeConsumidoraDoTicio, 78.6);
  funcionarioSeverino->executarServicoDeMedicao(medicao01Severino);
  delete medicao01Severino;
  Medicao* medicao02Severino = new Medicao(unidadeConsumidoraDoTicio, 180.1);
  funcionarioSeverino->executarServicoDeMedicao(medicao02Severino);
  delete medicao02Severino;

  std::cout << std::endl;

  unidadeConsumidoraDoTicio->imprimirFaturas();
  
  std::cout << std::endl;
}