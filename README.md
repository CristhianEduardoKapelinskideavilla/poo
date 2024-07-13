# Gerenciamento de Entregas

Este projeto tem como objetivo criar um sistema de gerenciamento de entregas, incluindo a gestão de clientes, pedidos e veículos. Ele é capaz de ler dados de um arquivo CSV, realizar geocodificação de endereços e alocar veículos para os pedidos baseados no peso e volume.

## Estrutura do Projeto

### Classes Principais

- **Cliente**: Representa um cliente com atributos como nome, CPF, endereço, telefone e email.
- **Pedido**: Representa um pedido com atributos como cliente, veículo, endereço de coleta, endereço de entrega, peso, volume e prioridade.
- **Veiculo**: Representa um veículo com atributos como endereço de coleta, endereço de entrega, peso, volume e disponibilidade.
- **GerenciadorVeiculos**: Gerencia a adição, remoção e busca de veículos.
- **GerenciadorPedidos**: Gerencia a adição, remoção e definição de veículos para os pedidos, além de realizar entregas.

### Funcionalidades

- **Leitura de CSV**: Lê dados de um arquivo CSV (`dados_entregas.csv`) e cria objetos Pedido.
- **Geocodificação**: Converte endereços em coordenadas de latitude e longitude usando a biblioteca `geopy`.
- **Gerenciamento de Veículos e Pedidos**: Adiciona, remove e busca veículos, além de associar veículos a pedidos e realizar entregas.

## Estrutura de Arquivos

- **cliente.py**: Contém a classe Cliente.
- **pedido.py**: Contém a classe Pedido.
- **veiculo.py**: Contém a classe Veiculo.
- **gerenciadorVeiculos.py**: Contém a classe GerenciadorVeiculos.
- **gerenciadorPedidos.py**: Contém a classe GerenciadorPedidos.
- **csv_handler.py**: Contém funções para leitura do CSV e geocodificação.
- **test_cliente.py**: Contém testes para a classe Cliente.
- **test_gerenciadorPedidos.py**: Contém testes para a classe GerenciadorPedidos.
- **test_gerenciadorVeiculos.py**: Contém testes para a classe GerenciadorVeiculos.
- **test_veiculo.py**: Contém testes para a classe Veiculo.
- **requiriments.txt**: Lista de dependências do projeto.

## Instalação

1. Clone o repositório:

    ```bash
    git clone https://github.com/CristhianEduardoKapelinskideavilla/poo.git
    cd poo/python
    ```

2. Crie um ambiente virtual e ative-o:

    ```bash
    python -m venv venv
    source venv/bin/activate  # No Windows use `venv\Scripts\activate`
    ```

3. Instale as dependências:

    ```bash
    pip install -r requiriments.txt
    ```

## Uso

1. Para ler os dados de entregas a partir do CSV:

    ```python
    from csv_handler import read_csv

    pedidos = read_csv()
    ```

2. Para converter um endereço em coordenadas de latitude e longitude:

    ```python
    from csv_handler import string_to_latlong

    coordenadas = string_to_latlong("Av Tiaraju, 97546-550 Alegrete / RS")
    ```

3. Para gerenciar veículos e pedidos:

    ```python
    from gerenciadorVeiculos import GerenciadorVeiculos
    from gerenciadorPedidos import GerenciadorPedidos
    from csv_handler import string_to_latlong
    from veiculo import Veiculo
    from pedido import Pedido
    from cliente import Cliente

    gerenciadorVeiculos = GerenciadorVeiculos()
    gerenciadorPedidos = GerenciadorPedidos()

    veiculo = Veiculo('Rua A', 'Rua B', 30, 40)
    gerenciadorVeiculos.adicionarVeiculo(veiculo)

    cliente = Cliente('João', '123.456.789-00', 'Rua A', '1234-5678', 'asdsa@gmail.com')
    pedido = Pedido(cliente, None, string_to_latlong('Av Tiaraju, 97546-550 Alegrete / RS'), string_to_latlong('Palácio do Congresso Nacional, 70160-900 Brasília / DF'), 10, 20, 1)

    gerenciadorPedidos.adicionarPedido(pedido)
    gerenciadorPedidos.set_gerenciadorVeiculos(gerenciadorVeiculos)

    gerenciadorPedidos.definirVeiculos()
    gerenciadorPedidos.realizarEntrega()
    ```

## Testes

Para executar os testes, use o comando:

```bash
pytest
