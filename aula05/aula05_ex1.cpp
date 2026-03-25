#include <iostream>
using namespace std;

int main () {
    float n1, n2, media = 0;
    
    cout << ("digite a nota 1: ");
    cin>> n1;

    cout << ("digite a nota 2: ");
    cin>> n2;

    

    media = (n1 + n2)/2;
    if (media >= 6) {
    cout << "aluno aprovado" << media <<endl; 
    }
    else {
        cout << "aluno reprovado";
    }
return 0;
    }
