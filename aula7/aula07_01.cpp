#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float lado, areaq, base, altura, arear;
    float raio, areaC;
    float graus, conversao;

    // quadrado

    do
    {
        cout << "digite o lado o quadrado : entre 1 e 50 ";
        cin >> lado;

        if ((lado < 1) || (lado > 50))

            cout << "digite entre 1 e 50" << endl;
    } while ((lado < 1) || (lado > 50));

    areaq = lado * lado;

    cout << "a area do quadrao é: " << areaq << endl;

    cout << "-------------------------" << endl
         << endl;

    // retangulo
    do
    {
        cout << "digite a base do retangulo : entre 1 e 50 ";
        cin >> base;
        if ((base < 1) || (base > 50))
        {
            cout << "digite o valor entre 1 e 50" << endl;
        }
    } while ((base < 1) || (base > 50));

    do
    {
        cout << "digite a  altura do retamgulo : entre 1 e 50: ";
        cin >> altura;

        if ((altura < 1) || (altura > 50))
        {
            cout << "digite entre 1 e 50: " << endl;
        }
    } while ((altura < 1) || (altura > 50));
    // desafio 1 coloque aqui os testes de progrmaçao defensiva

    arear = (base * altura);
    cout << "a area do retangulo : " << arear << endl;
    cout << "-----------------------------------" << endl
         << endl;
    // desafi 2 area do circulo a = pi(r2) a= 3.14* (r*r)

    do {
        cout << "digite o raio do circulo (entre 1 e 75): ";
        cin >> raio;
        if ((raio < 1) || (raio > 75))
            cout << "valor invalido, tente novamente!" << endl;
    } while ((raio < 1) || (raio > 75));

    areaC = M_PI * raio * raio;
    cout << "a area do circulo: " << areaC << endl;
    cout << "-----------------------------------" << endl << endl;

    // desfio3 conversao de fahrenheit para celcius c = (f - 32) x 5/9
    do
    {
        cout << "digite quantos graus: ";
        cin >> graus;

        if ((graus < 1) || (graus > 45))
        {
            cout << "digite quantos graus (1 entre 45): ";
        }
    } while ((graus < 1) || (graus > 45));

    conversao = (graus - 32) * 5 / 9;

    cout << "os graus para fharenheit sao: " << conversao << endl;

    return 0;
}
