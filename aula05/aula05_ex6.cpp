#include <iostream>
using namespace std;

int main () {
    char tamanho;
    cout << " digite o tamanho : (P/M/G)";
    cin>> tamanho;
    switch(tamanho){
        case 'P':
        cout << "pequeno";
        break;

        case 'M':
        cout << "medio";
        break;

        case 'G':
        cout << "grande";
        break;

        default:
        cout << " nao temo esse tamanho";
        }
        return 0;
}