#include <iostream>
#include "./includes/Pedido.h"
#include "./includes/Cliente.h"
#include "./includes/Veiculo.h"
#include "./includes/GerenciadorVeiculos.h"
#include "./includes/Roterizacao.h"
#include "./includes/Arquivo.h"

int main()
{
    Arquivo *arquivo = new Arquivo();
    vector<Pedido*> *pedidos = new vector<Pedido*>();
    vector<map<string, string>*> *dados_csv = new vector<map<string, string>*>();
    dados_csv = arquivo->read_csv("dados_entregas", ','); // TODO: certas strings tem virgula na parte de dentro, ou seja o split vai quebar no meio a string e vai dar ruim
    for(map<string, string> *dado: * dados_csv) {
        Veiculo *veiculo1 = new Veiculo(1000, "2021", "123456789", "Carro", "Rio de Janeiro, Brasil", "4x4", "Trabalho", 
         "Trabalho", "ABC-1234", 450, 350, 2000, 10000, -22.9068467, -43.1728965);

        Cliente *cliente = new Cliente();
        cliente->setNome(dado->at("Nome"));
        cliente->setCpf(dado->at("CPF"));
        cliente->setEndereco(dado->at("Endereço"));
        cliente->setTelefone(dado->at("Telefone"));
        cliente->setEmail(dado->at("Email"));
        
        Pedido *pedido = new Pedido();
        pedido->setLocal_coleta(dado->at("Endereço coleta"));
        pedido->setLocal_entrega(dado->at("Endereço entrega"));
        // pedido->setPeso_carga((float)dado->at("Peso (kg)"));
        // pedido->setVolume_carga((float)dado->at("Volume (m³)"));
        pedido->setCliente(cliente);
        pedido->setVeiculo(veiculo1);

        pedidos->push_back(pedido);
    }
    // Cliente *cliente1 = new Cliente("João", "123456789-00", "Lima, Peru", "123456789", "000000000", 20);
    // //std::cout << cliente1 << std::endl;

    // 
    // //std::cout << veiculo1 << std::endl;

    // Pedido *pedido1 = new Pedido(cliente1, nullptr, "Carro", "Buenos Aires, Argentina", "Lima, Peru", 1000, 100, -34.603722, -58.381592, -12.0463731, -77.042754);
    // //std::cout << *pedido1 << std::endl;


    // Veiculo veiculo2 = Veiculo(1000, "2021", "123456789", "Carro", "Santiago, Chile", "4x4", "Trabalho", 
    // "Trabaho", "ABC-1234", 450, 350, 2000, 1000, -33.4488915, -70.6692655);
    // //std::cout << veiculo2 << std::endl;

    // Veiculo veiculo3 = Veiculo(1000, "2021", "123456789", "Carrao", "Bogotá, Colômbia", "4x4", "Trabalho", 
    // "Trabalho", "ABC-1234", 450, 350, 2000, 1000, 4.7109886, -74.072092);
    // //std::cout << veiculo3 << std::endl;

    // Veiculo veiculo4 = Veiculo(1000, "2021", "123456789", "Carro", "Montevideo, Uruguai", "4x4", "Trabalho", 
    // "Trabalho", "ABC-1234", 450, 350, 2000, 1000, -34.9011127, -56.1645314);
    // //std::cout << veiculo4 << std::endl;

    // Pedido *pedido2 = new Pedido(cliente1, nullptr, "Carro", "Bogotá, Colômbia", "Montevideo, Uruguai", 1000, 100, 4.64342084221073, -74.1971426695125, -34.9011127, -56.1645314);
    // GerenciadorVeiculos *gerenciador = new GerenciadorVeiculos();
    // gerenciador -> adicionarVeiculo(&veiculo1);
    // gerenciador -> adicionarVeiculo(&veiculo2);
    // gerenciador -> adicionarVeiculo(&veiculo3);
    // gerenciador -> adicionarVeiculo(&veiculo4);
    // std::cout << gerenciador << std::endl;
    // Roterizacao *roterizacao1 = new Roterizacao();
    // roterizacao1 -> setPedido(pedido1);
    // roterizacao1 -> setVeiculosDisponiveis(gerenciador);
    // roterizacao1 -> acharVeiculo();
    // roterizacao1 -> calcularDistancia();
    // roterizacao1 -> calcularTempoEntrega(100);

    // //std::cout << *roterizacao1 << std::endl;
    // Roterizacao *roterizacao2 = new Roterizacao();
    // roterizacao2 -> setPedido(pedido2);
    // roterizacao2 -> acharVeiculo();
    // roterizacao2 -> calcularDistancia();
    // roterizacao2 -> calcularTempoEntrega(100);
    
    // roterizacao1 -> finalizarEntrega();
    // roterizacao2 -> finalizarEntrega();
    // std::cout << gerenciador << std::endl;

    // std::list<Roterizacao*> *roterizacoes = new std::list<Roterizacao*>();
    // roterizacoes -> push_back(roterizacao1);
    // roterizacoes -> push_back(roterizacao2);
    // std::cout << roterizacoes << std::endl;
    return 0;
}