#include <iostream>
#include <string>
using namespace std;

int main () {

    string nome = "Murilo";
    string letra = "m";
    string sobrenome = "Forte";

    cout << "meu nome é : " << nome << endl;
    cout << " nome completo : " <<(nome.append(sobrenome)) << endl;
    cout << "tamanho : " << (nome.length()) << endl;
    cout << "\nPrimeira letro do nome é : " << nome[0];
    nome[0] = 'T'; 
    cout << " meu nome agora é : " << nome << endl;

return 0;


}
