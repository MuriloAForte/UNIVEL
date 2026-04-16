#include <iostream>
#include <cmath>
using namespace std;

float areaQuadrado(float lado) {
        return lado * lado;

}

float AreaRetngulo(float altura, float base) {
    float resultado = 0;
        resultado =  base * altura;
        return resultado;
}

float AreaCirculo (float raio) {
        return M_PI * raio * raio;
}

void menu () {
    int opcao;

    cout << "____calculo de áreas___" << endl;
    cout<< "1 - quadrado " << endl;
    cout <<" 2- retangulo " << endl;
    cout << "3 - circulo " << endl;
    cout << " escolha uma das opçoes ";
    cin >> opcao;

    if (opcao == 1) {
        float lado;
        cout <<" digite o lado do quadrado" << endl;
        cin >> lado;
        cout << " a aea do quadrado é: " << areaQuadrado(lado) << endl;
    }

   else if (opcao ==2) {
        float base, altura;
        cout << " digite a base: " << endl;
        cin >> base;
        cout << "digite a altura: "<< endl;
        cin >> altura;
        cout << " area do retangulo é : " << AreaRetngulo(base,altura) << endl;
    }

    else if ( opcao == 3) {
        float raio;
        cout << "digite o raio do circulo" << endl;
        cin >> raio;
        cout << "a area do irculo é : " <<AreaCirculo(raio) << endl;

    }

    else {
        cout << " opcao invalda" << endl;

    }
}

int main () {
    menu ();
    return 0;
}

