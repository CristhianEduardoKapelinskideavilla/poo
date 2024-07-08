from veiculo import Veiculo
from gerenciadorVeiculos import GerenciadorVeiculos
from pedido import Pedido
from gerenciadorPedidos import GerenciadorPedidos
from cliente import Cliente

def test_gerenciadorPedidos():
    gerenciadorPedidos = GerenciadorPedidos()
    gerenciadorVeiculos = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 10, 20)
    veiculo2 = Veiculo('Rua C', 'Rua D', 30, 40)
    gerenciadorVeiculos.adicionarVeiculo(veiculo)
    gerenciadorVeiculos.adicionarVeiculo(veiculo2)
    cliente = Cliente('carlos', "12345678910", "Rua E", "Rua F", "ada23@gamail.com")
    pedido = Pedido(cliente, None, "rua G", "rua H", 10, 20, 1)
    pedido2 = Pedido(cliente, None, "rua I", "rua J", 30, 40, 1)
    gerenciadorPedidos.adicionarPedido(pedido)
    gerenciadorPedidos.adicionarPedido(pedido2)
    gerenciadorPedidos.set_gerenciadorVeiculos(gerenciadorVeiculos)
    gerenciadorPedidos.definirVeiculos()
    assert pedido.get_veiculo() == veiculo
    assert pedido2.get_veiculo() == veiculo2
    assert veiculo.get_disponivel() == False
    assert veiculo2.get_disponivel() == False
    gerenciadorPedidos.realizarEntrega()
    assert pedido.get_veiculo() == None 
    assert veiculo.get_disponivel() == True
