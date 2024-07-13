from cliente import Cliente

def test_cliente():
    cliente = Cliente('João', '123.456.789-00', 'Rua A', '1234-5678', 'asdsa@gmail.com')
    assert cliente.get_nome() == 'João'
    assert cliente.get_cpf() == '123.456.789-00'
    assert cliente.get_endereco() == 'Rua A'
    assert cliente.get_telefone() == '1234-5678'
    assert cliente.get_email() == 'asdsa@gmail.com'
    cliente.set_nome('Maria')
    cliente.set_cpf('987.654.321-00')
    cliente.set_endereco('Rua B')
    cliente.set_telefone('9876-5432')
    cliente.set_email('aaa@gmail.com')
    assert cliente.get_nome() == 'Maria'
    assert cliente.get_cpf() == '987.654.321-00'
    assert cliente.get_endereco() == 'Rua B'
    assert cliente.get_telefone() == '9876-5432'
    assert cliente.get_email() == 'aaa@gmail.com'
    assert str(cliente) == 'Nome: Maria\nCPF: 987.654.321-00\nEndereço: Rua B\nTelefone: 9876-5432\nEmail: aaa@gmail.com'
    