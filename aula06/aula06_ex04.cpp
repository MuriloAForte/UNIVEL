#include <iostream>
using namespace std;

int main () {
    char continua;
    continua = 's';

    while ( continua == 's') { // enquanto for igual a 's'deffio 1
        // comandos a serem executados
        cout << "repetindo.... \n";
        cout << "tecle  s se qiser continuar ou aperte outra tecla ";
        cout << "para parar\n";
        cin >> continua;
    }
    return 0;

}