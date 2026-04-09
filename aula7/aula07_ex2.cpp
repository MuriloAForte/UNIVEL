#include <iostream>
#include <stdexcept>
using namespace std;


double dividir(double numerador, double denominador) {
    if (denominador == 0) {
        throw runtime_error ("erro divisao por zero nao vale");

    }
    return numerador/ denominador;
}

int main () {
    double n1, n2, resultado;

    cout << "programa de divisao segura" << endl;
    cout << "digite o numerador : ";
    cin >>n1;
    cout << " digite o denominador: ";
    cin>> n2;
    
        try {
            cout << "tentando dividir" << endl;
            resultado = dividir(n1, n2);
            cout < "resultado: " << resultado << endl;
        }
        //bloco catch
        catch (const runtime_error& xx) {
            cerr << "erro computado: " << xx.what()<< endl;
        }
        //o C++ nao tem finaly, mas o codigo aqui sempre roda apos o try catch
        cout << "execucao do bloco de divisao finalizada" << endl;

        return 0;
}