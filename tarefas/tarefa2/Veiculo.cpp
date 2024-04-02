#include "Veiculo.h"
#include <iostream>

Veiculo::Veiculo()
{
    this -> capacidade_carga = "";
    this -> ano_fabricacao = "";
    this -> chassi = "";
    this -> modelo = "";
    this -> localizacao = "";
    this -> tracao = "";
    this -> especie = "";
    this -> categoria = "";
    float largura = 0;
    float altura = 0;
    float comprimento = 0;
    float peso = 0;
}

Veiculo::Veiculo(std::string capacidade_carga, std::string ano_fabricacao, std::string chassi, std::string modelo, std::string localizacao, std::string tracao, std::string especie, std::string categoria, float largura, float altura, float comprimento, float pes)
{
    this -> capacidade_carga = capacidade_carga;
    this -> ano_fabricacao = ano_fabricacao;
    this -> chassi = chassi;
    this -> modelo = modelo;
    this -> localizacao = localizacao;
    this -> tracao = tracao;
    this -> especie = especie;
    this -> categoria = categoria;
    this -> largura = largura;
    this -> altura = altura;
    this -> comprimento = comprimento;
    this -> peso = pes;
}

int Veiculo::setCapacidade_carga(std::string capacidade_carga)
{
    this -> capacidade_carga = capacidade_carga;
    return 1;
}
int Veiculo::setAno_fabricacao(std::string ano_fabricacao)
{
    this -> ano_fabricacao = ano_fabricacao;
    return 1;
}
int Veiculo::setChassi(std::string chassi)
{
    this -> chassi = chassi;
    return 1;
}
int Veiculo::setModelo(std::string modelo)
{
    this -> modelo = modelo;
    return 1;
    return 0;
}
int Veiculo::setLocalizacao(std::string localizacao)
{
    this -> localizacao = localizacao;
    return 1;
}
int Veiculo::setTracao(std::string tracao)
{
    this -> tracao = tracao;
    return 1;
}
int Veiculo::setEspecie(std::string especie)
{
    this -> especie = especie;
    return 1;
}
int Veiculo::setCategoria(std::string categoria)
{
    this -> categoria = categoria;
    return 1;
}
int Veiculo::setLargura(float largura)
{
    if(largura < 0)
    {
        std::cout << "Valor de largura invalido, setado como 0" << std::endl;
        return 0;
    }
    this -> largura = largura;
    return 1;
}
int Veiculo::setAltura(float altura)
{
    if(altura < 0)
    {
        std::cout << "Valor de altura invalido, setado como 0" << std::endl;
        return 0;
    }
    this -> altura = altura;
    return 1;
}
int Veiculo::setComprimento(float comprimento)
{
    if(comprimento < 0)
    {
        std::cout << "Valor de comprimento invalido, setado como 0" << std::endl;
        return 0;
    }
    this -> comprimento = comprimento;
    return 1;
}
int Veiculo::setPeso(float peso)
{
    if(peso < 0)
    {
        std::cout << "Valor de peso invalido" << std::endl;
        return 0;
    }
    this -> peso = peso;
    return 1;
}



std::string Veiculo::getCapacidade_carga()
{
    return this -> capacidade_carga;
}
std::string Veiculo::getAno_fabricacao()
{
    return this -> ano_fabricacao;
}
std::string Veiculo::getChassi()
{
    return this -> chassi;
}
std::string Veiculo::getModelo()
{
    return this -> modelo;
}
std::string Veiculo::getLocalizacao()
{
    return this -> localizacao;
}
std::string Veiculo::getTracao()
{
    return this -> tracao;
}
std::string Veiculo::getEspecie()
{
    return this -> especie;
}
std::string Veiculo::getCategoria()
{
    return this -> categoria;
}
float Veiculo::getLargura()
{
    return this -> largura;
}
float Veiculo::getAltura()
{
    return this -> altura;
}
float Veiculo::getComprimento()
{
    return this -> comprimento;
}
float Veiculo::getPeso()
{
    return this -> peso;
}