#include "Veiculo.cpp"
#include "Cliente.cpp"
#include "Pedido.cpp"
#include <iostream>

int main(void)
{
    Veiculo carro;
    carro.setAno_fabricacao("1991");
    carro.setModelo("Fusca");
    carro.setChassi("123456789");
    carro.setLocalizacao("Alegrete, RS");
    carro.setTracao("4x4");
    carro.setEspecie("Carro");
    carro.setCategoria("Passeio");
    carro.setLargura(185);
    carro.setAltura(220);
    carro.setComprimento(445);
    carro.setPeso(1500);
    std::cout << "Modelo: "<< carro.getModelo() << "\n"
                << "Ano de Fabricação: " << carro.getAno_fabricacao() << "\n"
                << "Chassi: " << carro.getChassi() << "\n"
                << "Localização: " << carro.getLocalizacao() << "\n"
                << "Tracao: " << carro.getTracao() << "\n"
                << "Especie: " << carro.getEspecie() << "\n"
                << "Categoria: " << carro.getCategoria() << "\n"
                << "Largura: " << carro.getLargura() << "cm\n"
                << "Altura: " << carro.getAltura() << "cm\n"
                << "Comprimento: " << carro.getComprimento() << "cm\n"
                << "Peso: " << carro.getPeso() << "kg\n";

    Cliente cliente1;
    cliente1.setNome("João");
    cliente1.setEmail("joao2913219@gmail.com");
    cliente1.setEndereco("Belo Horizonte, MG");
    cliente1.setTelefone("00 00000000");
    cliente1.setCpf("123456789");
    cliente1.setIdade(19);
    std::cout << "\nNome: " << cliente1.getNome() << "\n"
                << "CPF: " << cliente1.getCpf() << "\n"
                << "Endereço: " << cliente1.getEndereco() << "\n"
                << "Telefone: " << cliente1.getTelefone() << "\n"
                << "Email: " << cliente1.getEmail() << "\n"
                << "Idade: " << cliente1.getIdade() << " anos\n";

    Pedido pedido1;
    pedido1.setCliente(cliente1);
    pedido1.setVeiculo(carro);
    pedido1.setTipo_transporte("Carro");
    pedido1.setLocal_coleta(carro.getLocalizacao());
    pedido1.setLocal_entrega(pedido1.getCliente().getEndereco());
    pedido1.setPeso_carga(1000);
    pedido1.setVolume_carga(300);
    std::cout << "\nCliente: " << pedido1.getCliente().getNome() << "\n"
                << "Veiculo: " << pedido1.getVeiculo().getModelo() << "\n"
                << "Tipo de Transporte: " << pedido1.getTipo_transporte() << "\n"
                << "Local de Coleta: " << pedido1.getLocal_coleta() << "\n"
                << "Local de Entrega: " << pedido1.getLocal_entrega() << "\n"
                << "Peso da Carga: " << pedido1.getPeso_carga() << "kg\n"
                << "Volume da Carga: " << pedido1.getVolume_carga() << "cm³\n";
    
    return 0;
}
