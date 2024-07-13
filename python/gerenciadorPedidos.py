from pedido import Pedido
from veiculo import Veiculo
from gerenciadorVeiculos import GerenciadorVeiculos

class GerenciadorPedidos:
    def __init__(self):
        self.pedidos = []
        self.gerenciadorVeiculos = GerenciadorVeiculos()
    
    def adicionarPedido(self, pedido):
        self.pedidos.append(pedido)
    
    def removerPedido(self, pedido):
        self.pedidos.remove(pedido)

    def get_pedidos(self):
        return self.pedidos
    
    def set_pedidos(self, pedidos):
        self.pedidos = pedidos

    def get_gerenciadorVeiculos(self):
        return self.gerenciadorVeiculos

    def set_gerenciadorVeiculos(self, gerenciadorVeiculos):
        self.gerenciadorVeiculos = gerenciadorVeiculos

    def definirVeiculos(self):
        for pedido in self.pedidos:
            veiculo = self.gerenciadorVeiculos.buscarVeiculoPeso(pedido.get_peso())
            if veiculo is not None:
                pedido.set_veiculo(veiculo)
                veiculo.set_disponivel(False)

    def realizarEntrega(self):
        for pedido in self.pedidos:
            if((pedido.get_veiculo()) != None):
                pedido.get_veiculo().set_disponivel(True)
                pedido.set_veiculo(None)
                self.pedidos.remove(pedido)
                continue

    def __str__(self):
        pedidos = ''
        for pedido in self.pedidos:
            pedidos += str(pedido)
        return pedidos