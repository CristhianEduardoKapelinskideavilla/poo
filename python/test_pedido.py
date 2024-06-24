import pytest

from pedido import Pedido
from cliente import Cliente
from veiculo import Veiculo

def test_pedido():
    cliente = Cliente('João', '123.456.789-00', 'Rua A', '1234-5678', 'asdsa@gmail.com')
    veiculo = Veiculo('Rua A', 'Rua B', 10, 20)
    pedido = Pedido(cliente, veiculo, 'Rua B', 'Rua C', 10, 10, 1)
    assert pedido.get_cliente() == cliente
    assert pedido.get_veiculo() == veiculo
    assert pedido.get_endereco_coleta() == 'Rua B'
    assert pedido.get_endereco_entrega() == 'Rua C'
    assert pedido.get_peso() == 10
    assert pedido.get_volume() == 10
    assert pedido.get_prioridade() == 1
