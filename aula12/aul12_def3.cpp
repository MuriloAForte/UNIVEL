#include <iostream>
using namespace std;

class Livro {
    protected:
        string titulo;
        string autor;
        string editora;
        int ano;

    public:
        Livro(string titulo, string autor, string editora, int ano) {
            this->titulo = titulo;
            this->autor = autor;
            this->editora = editora;
            this->ano = ano;
        }

        void abrir() {
            cout << "Abrindo o livro: " << titulo << endl;
        }

        void fechar() {
            cout << "Fechando o livro: " << titulo << endl;
        }

        void ler() {
            cout << "Lendo o livro: " << titulo << " de " << autor << endl;
        }

        void alugar() {
            cout << "Livro: " << titulo << " alugado" << endl;
        }

        void guardar() {
            cout << "Guardando o livro: " << titulo << " na prateleira" << endl;
        }

        void exibir() {
            cout << "Titulo:  " << titulo  << endl;
            cout << "Autor:   " << autor   << endl;
            cout << "Editora: " << editora << endl;
            cout << "Ano:     " << ano     << endl;
        }
};

int main() {

    Livro l("O Senhor dos Aneis", "Tolkien", "HarperCollins", 1954);

    l.exibir();
    cout << "---" << endl;
    l.abrir();
    l.ler();
    l.fechar();
    l.alugar();
    l.guardar();

    return 0;
}