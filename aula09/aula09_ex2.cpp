#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main (){
    Pessoa p;

    cout << "digite o nome: ";
    getline(cin, p.nome);

    cout << "digite a idade: ";
    cin >> p.idade;

    cout << "digite a altura em metros: ";
    cin>> p.altura;

    cout<< "\nDADOS DA PESSOA:\n";
    cout << "nome: " << p.nome << endl;
    cout << "idade: " << p.idade<< " anos" << endl;
    cout << "altura: " << p.altura<< " metros" << endl;

    return 0;

}
