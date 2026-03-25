#include <iostream>
using namespace std;

int main () {
    float n1=0, n2=0, media = 0;
    int faltas= 0;

    cout <<("digite quantas faltas: ");
    cin>> faltas;

    cout << ("digite a nota 1: ");
    cin>> n1;

    cout << ("digite a nota 2: ");
    cin>> n2;

    media = (n1 + n2)/2; 

    if (faltas >=180) {
    cout << "aluno reprovado por falta";}
    else {
        if 
        (media >=6){
            cout <<"aluno aprovado" << media << endl;
        }
        else {
            cout<< "aluno reprovado";
        }
    }
return 0;
}
