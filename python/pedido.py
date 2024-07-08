class Pedido:
    def __init__(self, cliente, veiculo, endereco_coleta, endereco_entrega, peso, volume, prioridade):
        self.cliente = cliente
        self.veiculo = veiculo
        self.endereco_coleta = endereco_coleta
        self.endereco_entrega = endereco_entrega
        self.peso = peso
        self.volume = volume
        self.prioridade = prioridade
    
    def get_cliente(self):
        return self.cliente
    
    def get_veiculo(self):
        return self.veiculo
    
    def get_endereco_coleta(self):
        return self.endereco_coleta
    
    def get_endereco_entrega(self):
        return self.endereco_entrega
    
    def get_peso(self):
        return self.peso
    
    def get_volume(self):
        return self.volume
    
    def get_prioridade(self):
        return self.prioridade
    
    def set_cliente(self, cliente):
        self.cliente = cliente
    
    def set_veiculo(self, veiculo):
        self.veiculo = veiculo
    
    def set_endereco_coleta(self, endereco_coleta):
        self.endereco_coleta = endereco_coleta
    
    def set_endereco_entrega(self, endereco_entrega):
        self.endereco_entrega = endereco_entrega
    
    def set_peso(self, peso):
        self.peso = peso
    
    def set_volume(self, volume):
        self.volume = volume

    def set_prioridade(self, prioridade):
        self.prioridade = prioridade

    def __str__(self):
        return f'Cliente: {self.cliente}\nEndereço de coleta: {self.endereco_coleta}\nEndereço de entrega: {self.endereco_entrega}\nPeso: {self.peso}\nVolume: {self.volume}\nPrioridade: {self.prioridade}'
    
    def __eq__(self, other):
        return self.cliente == other.cliente and self.endereco_coleta == other.endereco_coleta and self.endereco_entrega == other.endereco_entrega and self.peso == other.peso and self.volume == other.volume and self.prioridade == other.prioridade

