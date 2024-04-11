#include "Veiculo.cpp"
#include "Cliente.cpp"
#include "Pedido.cpp"
#include "onibus.cpp"
#include "GerenciadorVeiculos.cpp"
#include <iostream>
#include <list>

int main(void)
{
    Veiculo carro = Veiculo("500kg", "1991", "123456789", "Fusca", "Хатанга, RU", "4x4", "Carro", "Passeio", "ABC123", 185, 220, 445, 1500, 71.95683503660769, 102.32859790085502);
    if(carro == carro)
        std::cout << carro;

    Cliente cliente1 = Cliente("João", "joao2913219@gmail.com", "Belo Horizonte, MG", "00 00000000", "123456789", 19);
    if(cliente1 == cliente1)
        std::cout << cliente1;
                
    Pedido pedido1 = Pedido(cliente1, carro, "Carro", carro.getLocalizacao(), cliente1.getEndereco(), 1000.0, 300.0);
    if(pedido1 == pedido1)
        std::cout << pedido1;

    Onibus onibus1 = Onibus(41, "5500kg", "1991", "123456789", "onibus", "Alegrete, RS", "8x4", "onibus", "trabalho","ABC321", 300, 400, 530, 4000, -29.789200620677825, -55.76846768255048);
    onibus1.setAltura(500);
    if (onibus1 == onibus1)
        std::cout << onibus1;
   
    Onibus onibus2 = Onibus();
    Veiculo motocicleta = Veiculo();

    GerenciadorVeiculos *gerenciador = new GerenciadorVeiculos();
    gerenciador -> adicionarVeiculo(carro);
    gerenciador -> adicionarVeiculo(onibus1);
    gerenciador -> adicionarVeiculo(onibus2);
    gerenciador -> adicionarVeiculo(motocicleta);
    gerenciador -> removerVeiculo(onibus2);
    
    Veiculo *search = gerenciador -> buscarId(12);
    if(search)
        std::cout << *search;
    search = gerenciador -> buscaPlaca("ABC321");
    if(search)
        std::cout << *search;

    std::list<Veiculo> *veiculos = gerenciador -> getVeiculosDisponiveis();
    std::cout << gerenciador;

    delete(gerenciador);

    return 0;
}
