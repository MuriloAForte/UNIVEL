#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int mains () {
    vector<Pessoa> pessoas;
    char continuar = 's';

    while (  continuar == 's' || continuar == 'S') {
    Pessoa p;

    cin.ignore(1000, '\n');

    cout << "digite o nome: ";
    getline(cin, p.nome);

    cout << "digite a idade: ";
    cin p.idade;

    cout << "digite a altura (em metros): ";
    cin >> p.altura;

   cout << "\ndeseja continuar\n";
   cin >> continuar;
    }

    cout << "\n lista de pessoas\n";
    for (int i = 0; i < pessoas.size(); i++) {
        cout << "\npessoas" << i + 1 << endl;

        cout << "nome :" << pessoas[i].nome << endl;
        cout << "idade:" << pessoas[i].idade << endl;
        cout << "altura :" << pessoas[i].altura<< endl;

        

    }
    return 0;
    
}
