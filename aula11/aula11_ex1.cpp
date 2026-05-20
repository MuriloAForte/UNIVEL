#include <iostream>
#include <string>
using namespace std;

class Carro {
    private: 
        string modelo;
        string cor;
        int velocidade;
    public :

        Carro (string modelo, string cor, int velocidadeinicial) {
            this -> modelo = modelo;
            this -> cor = cor;
            this ->velocidade = velocidadeinicial;
        }

        void exibirInformacoes () {
            cout << "modelo:" << this-> modelo << endl;
            cout << "cor: " << this->cor << endl;
            cout << "velocidade: "<< this-> velocidade << "km/h" <<  endl;
            cout << endl;

        }

};

int main () {

    Carro carro1 ("opala", "prata", 120);
    Carro carro2 ("megane", "cinza", 0);
    Carro carro3 ("F1000", "azul", 60);

    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();

    return 0;
}