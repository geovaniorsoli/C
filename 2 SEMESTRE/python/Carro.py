class Carro:
    def __init__(self, marca, modelo):
        self.marca = marca
        self.modelo = modelo
        self.ligado = False
        self.kmh = 0

    def ligar(self):
        if not self.ligado:
            self.ligado = True
            print(f"Carro {self.marca} {self.modelo} está ligado.")
        else:
            print(f"Carro {self.marca} {self.modelo} já está ligado.")

    def desligar(self):
        if self.ligado:
            self.ligado = False
            self.kmh = 0
            print(f"Carro {self.modelo} está desligado.")
        else:
            print(f"Carro {self.modelo} já está desligado.")

    def acelerar(self, velocidade):
        if self.ligado:
            self.kmh += velocidade
            print(f"Carro {self.marca} {self.modelo} está a {self.kmh} km/h.")
        else:
            print(f"Carro {self.marca} {self.modelo} está desligado e não pode acelerar.")

    def info(self):
        print(f"Marca: {self.marca}")
        print(f"Modelo: {self.modelo}")
        print(f"Ligado? {'Sim' if self.ligado else 'Não'}")
        print(f"Velocidade Atual: {self.kmh} km/h")


meuCarro = Carro('Nissan', 'March')
meuCarro.info()
meuCarro.ligar()
meuCarro.acelerar(50)
meuCarro.desligar()
meuCarro.info()
