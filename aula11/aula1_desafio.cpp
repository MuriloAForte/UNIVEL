#include <iostream>
#include <string>
using namespace std;

class Cliente {
    private:
        string nome;
        string telefone;
        string carro;
        int totalOS;

    public:
        Cliente(string nome, string telefone, string carro) {
            this->nome = nome;
            this->telefone = telefone;
            this->carro = carro;
            this->totalOS = 0;
        }

        void exibirInformacoes() {
            cout << "Nome: " << this->nome << endl;
            cout << "Telefone: " << this->telefone << endl;
            cout << "Carro: " << this->carro << endl;
            cout << "Total de OS: " << this->totalOS << endl;
            cout << endl;
        }

        void abrirOS() {
            this->totalOS += 1;
            cout << "OS aberta para " << this->nome << "Total de OS: " << this->totalOS << endl;
        }

        void atualizarTelefone(string novoTelefone) {
            this->telefone = novoTelefone;
            cout << "Telefone de " << this->nome << " atualizado para: " << this->telefone << endl;
        }
};

int main() {
    Cliente cliente1("João Silva", "49999999999", "Opala 75");
    Cliente cliente2("Maria Souza", "49988888888", "Megane 2010");

    cliente1.exibirInformacoes();
    cliente1.abrirOS();
    cliente1.abrirOS();
    cliente1.atualizarTelefone("49911111111");

    cout << endl;

    cliente2.exibirInformacoes();
    cliente2.abrirOS();

    return 0;
}