from gerenciadorVeiculos import GerenciadorVeiculos
from veiculo import Veiculo

def test_adicionar_veiculo():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.veiculos == [veiculo]

def test_remover_veiculo():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    gerenciador.removerVeiculo(veiculo)
    assert gerenciador.veiculos == []

def test_buscar_veiculo_peso_volume():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.buscarVeiculoPesoVolume(700, 2) == veiculo

def test_buscar_veiculo_peso():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.buscarVeiculoPeso(700) == veiculo

def test_buscar_veiculo_volume():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.buscarVeiculoVolume(2) == veiculo

def test_buscar_veiculo_peso_volume_nao_encontrado():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.buscarVeiculoPesoVolume(900, 4) == None

def test_buscar_veiculo_peso_nao_encontrado():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.buscarVeiculoPeso(900) == None

def test_buscar_veiculo_volume_nao_encontrado():
    gerenciador = GerenciadorVeiculos()
    veiculo = Veiculo('Rua A', 'Rua B', 800, 3)
    gerenciador.adicionarVeiculo(veiculo)
    assert gerenciador.buscarVeiculoVolume(4) == None
