class Cliente:
    def __init__(self, nome, cpf, endereco, telefone, email):
        self.nome = nome
        self.cpf = cpf
        self.endereco = endereco
        self.telefone = telefone
        self.email = email
    
    def get_nome(self):
        return self.nome

    def get_cpf(self):
        return self.cpf
    
    def get_endereco(self):
        return self.endereco
    
    def get_telefone(self):
        return self.telefone
    
    def get_email(self):
        return self.email
    
    def set_nome(self, nome):
        self.nome = nome

    def set_cpf(self, cpf):
        self.cpf = cpf
    
    def set_endereco(self, endereco):
        self.endereco = endereco

    def set_telefone(self, telefone):
        self.telefone = telefone
    
    def set_email(self, email):
        self.email = email
    
    def __str__(self):
        return f'Nome: {self.nome}\nCPF: {self.cpf}\nEndereço: {self.endereco}\nTelefone: {self.telefone}\nEmail: {self.email}'
    
    def __eq__(self, other):
        return self.nome == other.nome and self.cpf == other.cpf and self.endereco == other.endereco and self.telefone == other.telefone and self.email == other.email