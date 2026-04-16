#include <iostream>
using namespace std;

void menu () {
    cout << "1- chinelo"<< endl;
    cout << "2- bermuda" << endl;
    cout << " escolha uma das opcoes" <<endl;

}
    int valores (int op){
        int valor;
        switch (op) {
            case 1: 
                valor = 20.00;
                break;
            case 2:
                //desafio 1
                valor= 16.99;
                cout << "promocao";
                break;
            default:
                cout << "nao tem em estoque";
                break;
        };
        return valor;
    } 
 
    int main () {
        int op, qtd;
        int valor_individual, total;
        menu();
        cin >> op;
        cout << " digite quantidade: ";
        cin >> qtd;
        valor_individual = valores(op);
        total = valor_individual * qtd;
        cout << " valor a pagar" << total << endl;

        return 0;
    }
