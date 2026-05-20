#include <iostream>
#include <string>
using namespace std;

class Triciculo {
    private: 
        string modelo;
        string cor;
        int velocidade;
    public :

        Triciculo (string modelo, string cor, int velocidadeinicial) {
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

         void pedalar(int aumento)
    {
        this->velocidade += aumento;
        if (this->velocidade >= 25)
        {
            this->velocidade = 25;
        }
        cout << this->modelo << " pedalou pra carai! velocidade: " << this->velocidade << " km/h" << endl;
    }

};

int main () {

  Triciculo triciculo1("Roda grande", "vermelho com chamas", 10);


  triciculo1.exibirInformacoes();
  triciculo1.pedalar(10);


    return 0;
}