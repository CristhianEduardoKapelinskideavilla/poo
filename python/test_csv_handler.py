from csv_handler import string_to_latlong
from csv_handler import read_csv

def test_read_csv():
    csv_handler = read_csv()
    assert csv_handler[0].cliente.nome == "Asafe Vasconcelos"
    assert csv_handler[0].cliente.cpf == "74570729850"
    assert csv_handler[0].cliente.endereco == "Rua de da Cruz, 5 Savassi 89833-698 Rocha Grande / SC"
    assert csv_handler[0].cliente.telefone == "21 3613 6522"
    assert csv_handler[0].cliente.email == "julianalopes@example.com"
    assert csv_handler[0].endereco_coleta == "Rua de da Cruz, 5 Savassi 89833-698 Rocha Grande / SC"
    assert csv_handler[0].endereco_entrega == "Aeroporto Castro, 85 Vila Das Oliveiras 59282445 Pastor / AP"
    assert csv_handler[0].peso == 3000
    assert csv_handler[0].volume == 5
    assert csv_handler[0].prioridade == True

def test_string_to_latlong():
    assert string_to_latlong("Av Tiaraju, 97546-550 Alegrete / RS") == (-29.7885738, -55.7686944)
    assert string_to_latlong("Palácio do Congresso Nacional, 70160-900 Brasília / DF") == ( -15.79975835 ,  -47.863402244106936 )
    assert string_to_latlong("Av. Borges do Canto, 98865-000 São Miguel das Missões /RS ") ==  ( -28.5502093 ,  -54.5537251 )
    assert string_to_latlong("Parque Nacional da Tijuca, 95960-000 Rio de Janeiro / RJ") == ( -22.962513700000002 ,  -43.28912054458452 )