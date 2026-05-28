#include <iostream>
using namespace std;

class Pessoa {
    protected:
        string nome;
        string sobrenome;
        int idade;
        string genero;

    public:
        Pessoa(string nome, string sobrenome, int idade, string genero) {
            this->nome = nome;
            this->sobrenome = sobrenome;
            this->idade = idade;
            this->genero = genero;
        }

        void comer() {
            cout << nome << " esta comendo" << endl;
        }

        void dormir() {
            cout << nome << " esta dormindo" << endl;
        }

        void pensar() {
            cout << nome << " esta pensando" << endl;
        }

        void trabalhar() {
            cout << nome << " esta trabalhando" << endl;
        }

        void exibir() {
            cout << "Nome:      " << nome      << endl;
            cout << "sobrenome: " << sobrenome << endl;
            cout << "idade:     " << idade     << endl;
            cout << "genero:    " << genero    << endl;
        }
};

int main() {

    Pessoa p("Marcao", "Silvarado", 25, "Masculino");

    p.exibir();
    cout << "---" << endl;
    p.comer();
    p.dormir();
    p.pensar();
    p.trabalhar();

    return 0;
}