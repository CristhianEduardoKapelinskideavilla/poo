#include "GerenciadorVeiculos.h"

GerenciadorVeiculos::GerenciadorVeiculos()
{
    veiculos = new std::list<Veiculo>();
}

GerenciadorVeiculos::~GerenciadorVeiculos()
{
    delete(veiculos);
}

void GerenciadorVeiculos::adicionarVeiculo(Veiculo veiculo)
{
    veiculos -> push_back(veiculo);
}

std::ostream& operator<<(std::ostream& os, GerenciadorVeiculos *gerenciador)
{
    os<< "\nTodos os veiculos gerenciados: \n";
    for (std::list<Veiculo>::iterator i = gerenciador -> getVeiculosDisponiveis() -> begin(); i != gerenciador -> getVeiculosDisponiveis() -> end(); i++)
    {
        os << *i << "\n";
    }
    return os;
}

void GerenciadorVeiculos::removerVeiculo(Veiculo veiculo)
{
    veiculos -> remove(veiculo);
}

Veiculo *GerenciadorVeiculos::buscarId(int id)
{
    for(std::list<Veiculo>::iterator i = veiculos -> begin(); i != veiculos -> end(); i++)
    {
        if(i -> getId() == id)
            return &(*i);
    }
    return NULL;
}

Veiculo *GerenciadorVeiculos::buscaPlaca(std::string placa)
{
    for(std::list<Veiculo>::iterator i = veiculos -> begin(); i != veiculos -> end(); i++)
    {
        if(i -> getPlaca() == placa)
        {
            return &(*i);
        }
    }
    return NULL;
}

Veiculo *GerenciadorVeiculos::buscarLocalizacao(std::string localizacao)
{
    for(std::list<Veiculo>::iterator i = veiculos -> begin();i != veiculos -> end(); i++)
    {
        if(i -> getLocalizacao() == localizacao)
        {
            return &(*i);
        }
    }
    return NULL;
}

std::list<Veiculo> *GerenciadorVeiculos::getVeiculosDisponiveis()
{
    return veiculos;
}