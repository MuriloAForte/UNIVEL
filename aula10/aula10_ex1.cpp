#include <iostream>
#include <string>
using namespace std;

class conta { //classe
    private: // encapsulamento
        int numeroconta;
        string titular;
        double saldo;
    public:
        conta( int numero, string nome, double saldoinicial) {
            numeroconta = numero;
            titular = nome;
            saldo = saldoinicial;
        }
    // aula 14/05
    //depositar dinheiro metodo

    void depositar(double valor) {
        saldo +=valor;
        cout<< "deposito realizado com sucesso" << endl;
    }

void sacar(double valor) {
    if (valor <=saldo) {
        saldo -= valor;
        cout << "saque realizado com sucesso" << endl;
    } else{
        cout << " nao tem mais nada aqui irmao " << endl;
    }
}

void exibirdados () {
    cout << "\n ===dados da conta==="<< endl;
    cout << "titular: "<< titular << endl;
    cout << " conta:" << numeroconta << endl;
    cout << "saldo: " << saldo << endl;

}

};

int main() {
    conta minhaConta(1001, "Murilo", 500.0);

    minhaConta.exibirdados();
    minhaConta.depositar(200.0);
    minhaConta.sacar(100.0);
    minhaConta.exibirdados();

    return 0;
}


