# Programação Orientada a Objetos 2024
`cristhianavila.aluno@unipampa.edu.br` 
`2310100609`

## Tarefa 1
1) Implementadas as classes:
    - Veiculo
    - Cliente
    - Pedido
2) Implementados `get`e `set` para todas as variaveis das classes

## Tarefa 2

1) Implementada a classe `onibus` com `herança`.
2) Implementada a classe `gerenciadorVeiculos`, que contem métodos para gerenciar todos os Veiculos da empresa com uma `lista`, contendo métodos para buscar Veiculos e gerenciar a lista.
3) Adicionada à classe Veiculo um `static int id` que é unico para cada Veiculo e usado para gerenciar os Veiculos.

## Tarefa 3

1) Implementada a sobrecarga dos operadores `==` e `<<` em todas as classes.
2) Implementada a sobrecarga de metodos utilizando `polimorfismo`.
3) Iniciada a implementacão da classe `Roterização`, responsavel por gerenciar as rotas dos pedidos.
    - Feita uma função que calcula a distancia em quilometros entre duas coordenadas na superficie da terra utilizando a Formula de Haversine <img src="tarefas/tarefa3/haversine.png" width="500">

## Tarefa 4

1) Criados `READMEs` para cada semana, e um para todo o projeto que reune os de cada semana em apenas um.
2) Inseridos `comentarios` no código para facilitar o entendimento.
3) Modificada a classe `Pedido`, substituidas as variaveis `latitude` e `longitude` por `latitudeOrigem`, `longitudeOrigem`, `latitudeDestino` e `longitudeDestino`. Além das variaveis cliente e veiculo da classe terem mudado de variaveis estaticas para ponteiros.
4) Modificado o parametro da classe Roterizacao, de `calcular a distancia entre pontos`, agora ela usa as novas variaveis do pedido para calcular a distancia entre o veiculo e o local de coleta, e entre o local de coleta e local de entrega, além da distancia total.
5) Criada um parametro na classe `GerenciadorVeiculos` para buscar os veiculos mais proximos à um certo ponto, e que tenha uma capacidade de carga maior ou igual ao necesario.
6) Modificado o parametro `acharVeiculo` da classe Roterizacao, agora o mesmo acha o veiculo mais proximo a regiao de coleta e com a capacidade de carga necessaria, além de remover o veiculo da lista de veiculos disponiveis.
7) Criado o parametro `finalizarEntrega`, que adiciona o veiculo novamente à lista de veiculos disponiveis e que troca a localizacao do veiculo para a localizacão de entrega.