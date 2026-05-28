#include <iostream>
using namespace std;

class Funcionario{
    protected:
        double salarioBase;
        string nome;

    public:
        Funcionario(double salarioBase_, string nome) {
            salarioBase = salarioBase_;
            this ->nome = nome;
        }

        virtual double calcularsalario() {
            return  salarioBase;
        }

        void exibir() {
            cout << "Nome: " << nome << endl;
            cout << "salario: " << calcularsalario() << endl;
        }
    };

class Gerente : public Funcionario {
        private: 
            double bonus;

        public:
            Gerente(double salarioBase, string nome, double bonus)
                :Funcionario(salarioBase, nome){
                    this->bonus = bonus;
                }
            double calcularsalario() override{
                return  salarioBase + bonus;
            }
};
class Vendedor : public Funcionario{
        private: 
            double comissao;

        public:
            Vendedor(double salarioBase, string nome, double comissao) 
                :Funcionario(salarioBase, nome){
                    this->comissao = comissao;
                }
            double calcularsalario() override {
                return salarioBase + comissao;
            }
};

int main () {

    Gerente g(2000,"silviano", 900);
    Vendedor v(1800,"mauricio", 350);

    g.exibir();
    cout << "---";
    v.exibir();

    return  0;
}
    

