#include <iostream>
#include <string>
using namespace std;
//classe aberta - interface
class Veiculo {
    public:
//metodo virtual puro
     virtual void exibirinformacoes() const = 0;
//metodo obrigatorio para filhos
     virtual ~Veiculo () {}
//destruir virtual (boa prtica com herança)
};
//classe deriada - concreto : carro
class Carro: public Veiculo{
    public:

        virtual void exibirinformacoes() const override{
            cout << "carro fusca azul " << endl;
        }
};

//classe derivada moto
class Moto : public Veiculo{
    public:
        void exibirinformacoes() const override {
            //override = sobrepor = sobrepor o const  = 0
            cout << "moto potente dourada" << endl;
        }
};

int main () {
    Veiculo* v1 = new Carro();
    Veiculo* v2 = new Moto();

    v1->exibirinformacoes();
    v2->exibirinformacoes();
    delete v1;
    delete v2;
    return 0;
    
}