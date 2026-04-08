#include <iostream>
using namespace std;

int main () {
    float lado,  areaq, base, altura, arear;

    cout<< "digite o lado o quadrado : entre 1 e 50" << endl;
    cin>> lado;

    if ((lado <1) || (lado>50)) {
        cout << "digite entre 1 e 50";
    }
    
areaq = lado * lado;
cout << "a area do quadrao é: " << areaq << endl;
cout <<"-------------------------" <<endl << endl;
cout<< "digite a base do retangulo : entre 1 e 50 ";
cin >> base;
cout<< "digite a  altura do retamgulo : entre 1 e 50";
cin>> altura;
//desafio 1 coloque aqui os testes de progrmaçao defensiva

arear = (base*altura);
cout << "a area do retangulo é: " << arear<< endl;
cout<< "-----------------------------------" << endl << endl;
//desafi 2 area do circulo a = pi(r2) a= 3.14* (r*r)
//desfio3 conversao de fahrenheit para celcius c = (f - 32) x 5/9


}

