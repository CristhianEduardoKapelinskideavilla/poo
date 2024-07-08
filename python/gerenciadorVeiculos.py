from veiculo import Veiculo

class GerenciadorVeiculos:
    def __init__(self):
        self.veiculos = []
    
    def adicionarVeiculo(self, veiculo):
        self.veiculos.append(veiculo)
    
    def removerVeiculo(self, veiculo):
        self.veiculos.remove(veiculo)

# buscar veiculos por peso e volume
    def buscarVeiculoPesoVolume(self, peso, volume):
        for veiculo in self.veiculos:
            if veiculo.get_peso() >= peso and veiculo.get_volume() >= volume and veiculo.disponivel == True:
                return veiculo
        return None
    
    def buscarVeiculoPeso(self, peso):
        for veiculo in self.veiculos:
            if veiculo.get_peso() >= peso and veiculo.disponivel == True:
                return veiculo
        return None
    
    def buscarVeiculoVolume(self, volume):
        for veiculo in self.veiculos:
            if veiculo.get_volume() >= volume and veiculo.disponivel == True:
                return veiculo
        return None