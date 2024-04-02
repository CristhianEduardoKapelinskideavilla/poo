#include "Cliente.h"
#include <iostream>
#include <stdlib.h>


Cliente::Cliente(std::string nome, std::string email, std::string endereco, std::string telefone, std::string cpf, int idade)
{
    this -> alocate();
    *this -> nome = nome;
    *this -> email = email;
    *this -> endereco = endereco;
    *this -> telefone = telefone;
    *this -> cpf = cpf;
    *this -> idade = idade;
}

Cliente::Cliente()
{
    this -> alocate();
    *this -> nome = "";
    *this -> email = "";
    *this -> endereco = "";
    *this -> telefone = "";
    *this -> cpf = "";
    *this -> idade = 0;
}

void Cliente::alocate()
{
    this -> nome = new std::string;
    this -> email = new std::string;
    this -> endereco = new std::string;
    this -> telefone = new std::string;
    this -> cpf = new std::string;
    this -> idade = new int;
}
Cliente::~Cliente()
{
    delete(this -> nome);
    delete(this -> email);
    delete(this -> endereco);
    delete(this -> telefone);
    delete(this -> cpf);
    delete(this -> idade);
}
int Cliente::setNome(std::string *nome)
{
    this -> nome = nome;
    return 1;
}
int Cliente::setEmail(std::string *email)
{
    this -> email = email;
    return 1;
}
int Cliente::setEndereco(std::string *endereco)
{
    this -> endereco = endereco;
    return 1;
}
int Cliente::setTelefone(std::string *telefone)
{
    this -> telefone = telefone;
    return 1;
}
int Cliente::setCpf(std::string *cpf)
{
    this -> cpf = cpf;
    return 1;
}
int Cliente::setIdade(int *idade)
{
    if(*idade <= 0)
    {
        printf("Idade invalida");
        return 0;
    }
    this -> idade = idade;
    return 1;
}



std::string Cliente::getNome()
{
    return *this -> nome;
}
std::string Cliente::getEmail()
{
    return *this -> email;
}
std::string Cliente::getEndereco()
{
    return *this -> endereco;
}
std::string Cliente::getTelefone()
{
    return *this -> telefone;
}
std::string Cliente::getCpf()
{
    return *this -> cpf;
}
int Cliente::getIdade()
{
    return *this -> idade;
}