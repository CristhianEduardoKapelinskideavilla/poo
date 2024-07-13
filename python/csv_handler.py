from pedido import Pedido
from veiculo import Veiculo
from cliente import Cliente
from gerenciadorVeiculos import GerenciadorVeiculos
from gerenciadorPedidos import GerenciadorPedidos
from geopy.geocoders import Nominatim
import csv


def read_csv():
    with open('dados_entregas.csv', mode='r') as file:
        csv_reader = csv.DictReader(file)
        pedidos = []
        for row in csv_reader:
            pedidos.append(Pedido(Cliente(row['Nome'], row['CPF'], (row['Endereço']).replace("\n", " "), row['Telefone'], row['Email']), None, (row['Endereço coleta']).replace("\n", " "), (row['Endereço entrega']).replace("\n", " "), float(row['Peso (kg)']), float(row['Volume (m³)']),bool(row['Prioridade'])))
        return pedidos

def string_to_latlong(string):
    geolocator = Nominatim(user_agent="21934821249192149142924194219241")
    try:
        query = string.split(",")
        postalcode = ""
        city_state = ""
        street = ""
        change = 0
        for segment in (string.replace("-", "")).split(' '):
            if change == 1:
                city_state += segment + " "
            if segment.isnumeric() == True and len(segment) == 8:
                postalcode = segment
                change = 1
            if change == 0:
                street += segment + " "
        city_state = city_state.split("/")
        params = {
            'street': street,
            'city' : city_state[0],
            'state' : city_state[1],
            'country' : "Brazil",
            'postalcode' : postalcode
        }
        location = geolocator.geocode(params,  timeout=10)
        if location:
            print("Latitude e longitude do endereço: (", location.latitude, ", ", location.longitude, ")")
            return (location.latitude, location.longitude)
        else:
            print("Local nao encontrado para o endereçõ", params)
    except Exception as e:
        pass
        print("Ocorreu um erro:", e)
    return string

# pedido = read_csv()
# with open("logs.txt", "w") as file:
#     for pedido_ in pedido:
#         pedido_.endereco_coleta = string_to_latlong(pedido_.endereco_coleta)
#         pedido_.endereco_entrega = string_to_latlong(pedido_.endereco_entrega)
#         file.write(str(pedido_.endereco_coleta) +"\n" + str( pedido_.endereco_entrega) + "\n")