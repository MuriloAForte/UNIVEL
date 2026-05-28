#include <iostream>
using namespace std;

class Forma {
    protected:
        string nome;

    public:
        Forma(string nome) {
            this->nome = nome;
        }

        virtual double area() = 0;      
                                    

        void exibir() {
            cout << "Forma: " << nome << endl;
            cout << "Area: " << area() << endl;
        }
};

class Retangulo : public Forma {
    private:
        double largura;
        double altura;

    public:
        Retangulo(string nome, double largura, double altura)
            : Forma(nome) {
                this->largura = largura;
                this->altura = altura;
            }

        double area() override {
            return largura * altura;
        }
};

class Circulo : public Forma {
    private:
        double raio;

    public:
        Circulo(string nome, double raio)
            : Forma(nome) {
                this->raio = raio;
            }

        double area() override {
            return 3.14 * raio * raio;
        }
};

int main() {

    Retangulo r("Retangulo", 5, 3);
    Circulo c("Circulo", 4);

    r.exibir();
    cout << "---" << endl;
    c.exibir();

    return 0;
}