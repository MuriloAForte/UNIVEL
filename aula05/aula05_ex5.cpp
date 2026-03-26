#include <iostream>
using namespace std;

int main() {
    int dia_semana;
        cout << "digite o dia da semana: ";
        cin >> dia_semana;
        switch (dia_semana) {
            case 1:
            cout << "domingo";
            break;
        case 2:
            cout << "segunda";
            break;
            //desafio 4
        case 3:
            cout << "Big terça";
            break;

        case 4:
            cout << "quarta-feira";
            break;

        case 5:
            cout << "Dia do pingao";
            break;

        case 6:
            cout << "sexta";
            break;

        case 7:
            cout << "Sabadou";
            break;

            default:
                cout << "este dia nao existe";
        }
        return 0;
}