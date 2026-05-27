#include <iostream>
using namespace std;

class Contabancaria {
    private:
        string titular;
        double saldo;
    
    public:
        Contabancaria() {
            titular = "";
            saldo =0;
        }
//setter - guardar
        void settitular(string nome) {
            titular = nome;
        }
//geter- buscar
        string gettitular() {
            return titular;
        }

        double getsaldo() {
            return saldo;
        }

        void depositar(double valor) {
            if(valor > 0) {
                saldo +=valor;
                cout << "deposito realizado!!!"<< endl;
            }
        }

        void sacar(double valor) {
            if (valor<= saldo) {
                saldo -=valor;
                cout << "saque feito" << endl;
            } else {
                cout << " nao deu certo amigao" << endl;
            }
        }
};


int main () {

    Contabancaria conta;


    conta.settitular("maria");
    conta.depositar(1000);
    cout << "titular: " << conta.gettitular() << endl;
    cout << "saldo atual:" << conta.getsaldo() << endl;
    conta.depositar(500);
    cout<< "saldo atual: " << conta.getsaldo()<< endl;
    conta.sacar(150);
    cout << "saldo atual:" << conta.getsaldo() << endl;
    conta.sacar(2000);

    return 0;
}