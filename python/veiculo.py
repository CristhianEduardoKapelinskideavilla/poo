class Veiculo:
    def __init__(self, endereco_coleta, endereco_entrega, peso, volume, disponivel=True):
        self.endereco_coleta = endereco_coleta
        self.endereco_entrega = endereco_entrega
        self.peso = peso
        self.volume = volume
        self.disponivel = disponivel
    
    def get_endereco_coleta(self):
        return self.endereco_coleta
    
    def get_endereco_entrega(self):
        return self.endereco_entrega
    
    def get_peso(self):
        return self.peso
    
    def get_volume(self):
        return self.volume
    
    def get_disponivel(self):
        return self.disponivel
    
    def set_endereco_coleta(self, endereco_coleta):
        self.endereco_coleta = endereco_coleta

    def set_endereco_entrega(self, endereco_entrega):
        self.endereco_entrega = endereco_entrega
    
    def set_peso(self, peso):
        self.peso = peso
    
    def set_volume(self, volume):
        self.volume = volume

    def set_disponivel(self, disponivel):
        self.disponivel = disponivel
    
    def __str__(self):
        return f'Endereço de coleta: {self.endereco_coleta}\nEndereço de entrega: {self.endereco_entrega}\nPeso: {self.peso}\nVolume: {self.volume}'
    
    def __eq__(self, other):
        if other is None:
            return False
        return self.endereco_coleta == other.endereco_coleta and self.endereco_entrega == other.endereco_entrega and self.peso == other.peso and self.volume == other.volume
    