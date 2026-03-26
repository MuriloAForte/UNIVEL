#include <iostream>
using namespace std;

int main () {
    char tamanho;
    float imc;
    cout <<"digite seu IMC: ";
    cin>> imc;
    cout << "digite seu tamanho: ";
    cin >> tamanho;

    switch(tamanho) {
        case 'P':
        cout << "pequeno";
        if (imc >=20) {
            cout <<" esse é muito pequeno para voce";
        }
        break;
          case 'M':
        cout << "medio" << endl;
        if (imc >=26) {
            cout <<" esse é muito pequeno para voce";
        }
        else {
            cout << "tamnaho na linha";
        }
        break;
    }
}