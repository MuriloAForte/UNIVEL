#include <iostream>
using namespace std;

int main () {
    float n1=0, n2=0, media = 0;
    int faltas= 0;
    int idade = 0;
    int aprova = 0;
    int emancipado = 0;

    cout <<("digite quantas faltas: ");
    cin>> faltas;

    cout << ("digite a nota 1: ");
    cin>> n1;

    cout << ("digite a nota 2: ");
    cin>> n2;

    media = (n1 + n2)/2; 

    if ((faltas <180) && (media >=6)) {    // uando AND
        // ||or - != not equal ou diferente
    cout << "aprovado";}
    else {
        if 
        (faltas >=180) {
            cout <<"aluno reprovado por falta" << endl;
        }
        else {
           cout << "aprova por conelho(0 nao 1 sim)";
           cin >> aprova;}

           if((aprova)) {
            cout << "reprovado por conselho";}
            else {
                cout << "aulno aprovado";}
            
           
        }

    cout << "digite a idade";
    cin >> idade;
    cout << "digite se for emancipado (1 sim ou 0 nao)";
    cin >> emancipado;

    if ((idade >=18) || (emancipado)) {//usndo OR
        cout << " voce pode retirar seu boletim";
    }
    else {
        cout << "os repoonsaveis devem retirr o boletim";
    }
    if (idade >= 18) {
        cout <<" a partir e agor voce paga os seus boleto";
    }
    
return 0;
}
