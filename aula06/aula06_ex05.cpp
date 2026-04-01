#include <iostream>
using namespace std;

int main () {
    char continua;
    continua = 's';

   do { 
        // comandos a serem repetidos
        cout << "repetindo.... \n";
        cout << "tecle  s se qiser continuar ou aperte outra tecla ";
        cout << "para parar\n";
        cin >> continua;

    }  while ( continua == 's');

}