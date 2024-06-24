import pytest

from veiculo import Veiculo

def test_veiculo():
    veiculo = Veiculo('Rua A', 'Rua B', 10, 20)
    assert veiculo.get_endereco_coleta() == 'Rua A'
    assert veiculo.get_endereco_entrega() == 'Rua B'
    assert veiculo.get_peso() == 10
    assert veiculo.get_volume() == 20
    veiculo.set_endereco_coleta('Rua C')
    veiculo.set_endereco_entrega('Rua D')
    veiculo.set_peso(30)
    veiculo.set_volume(40)
    assert veiculo.get_endereco_coleta() == 'Rua C'
    assert veiculo.get_endereco_entrega() == 'Rua D'
    assert veiculo.get_peso() == 30
    assert veiculo.get_volume() == 40
    assert str(veiculo) == 'Endereço de coleta: Rua C\nEndereço de entrega: Rua D\nPeso: 30\nVolume: 40'
    veiculo2 = Veiculo('Rua C', 'Rua D', 30, 40)
    assert veiculo == veiculo2
    veiculo2.set_endereco_coleta('Rua E')
    assert veiculo != veiculo2
    veiculo2.set_endereco_coleta('Rua C')
    veiculo2.set_endereco_entrega('Rua F')
    assert veiculo != veiculo2
    veiculo2.set_endereco_entrega('Rua D')
    veiculo2.set_peso(50)
    assert veiculo != veiculo2
    veiculo2.set_peso(30)
    veiculo2.set_volume(60)
    assert veiculo != veiculo2
    veiculo2.set_volume(40)
    assert veiculo == veiculo2
    assert veiculo == veiculo