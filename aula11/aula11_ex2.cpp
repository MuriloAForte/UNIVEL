#include <iostream>
#include <string>
using namespace std;

class Carro
{
private:
    string modelo;
    string cor;
    int velocidade;

public:
    // construtor de classe
    // usando o this aqui
    Carro(string modelo, string cor, int velocidadeinicial)
    {
        this->modelo = modelo;
        this->cor = cor;
        this->velocidade = velocidadeinicial;
    }

    void acelerar(int aumento)
    {
        this->velocidade += aumento;
        if (this->velocidade >= 300)
        {
            this->velocidade = 300;
        }
        cout << this->modelo << " pisou fundo! velocidade: " << this->velocidade << " km/h" << endl;
    }

    void frear(int reducao)
    {
        this->velocidade -= reducao;
        if (this->velocidade <= 0)
        {                         
            this->velocidade = 0; 
        }
        cout << this->modelo << " desacelerou! Velocidade: " << this->velocidade << " km/h" << endl;
    }


void exibirInformacoes()
{
    cout << "modelo:" << this->modelo << endl;
    cout << "cor: " << this->cor << endl;
    cout << "velocidade: " << this->velocidade << "km/h" << endl;
    cout << endl;
}
};



// acelerar
// frear
// ligar farol

int main()
{

    Carro carro1("opala", "prata", 120);
    Carro carro2("megane", "cinza", 0);
    Carro carro3("F1000", "azul", 60);

    carro1.exibirInformacoes();
    carro1.acelerar(50);
    carro1.frear(20);

    cout << endl;

    carro2.exibirInformacoes();
    carro2.acelerar(100);
    cout << endl;

    carro3.exibirInformacoes();

    return 0;
}