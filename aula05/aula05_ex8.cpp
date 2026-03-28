#include <iostream>
using namespace std;

int main() {

char peso;
char musculo;

cout<< "Qual musculo voce vai treinar hoje? (P = peito/ C = Costas/ Q = quadriceps)";
cin>> musculo;

switch(musculo) {
    case 'P':
        cout << "Supino reto na maquina" << endl;


        cout << "escolha o peso do exercicio (F = facil/ M = medio/ D = dificil)";
        cin >> peso;

        switch (peso) {
            case 'F':
                cout << "Supino na maquina facil" << endl;
                cout << "tenha um bom treino";
                break;
            case 'M':
                cout << "supino na maquina medio";
                break;
            case 'D':
                cout << "supino na maquina dificil";
            break;

            default : 
                cout<< " esse peso nao existe por aqui";
        }
        break;

    case 'C':
        cout << "remada curvada na barra" << endl;

          cout << "escolha o peso do exercicio (F = facil/ M = medio/ D = dificil)";
        cin >> peso;

        switch (peso) {
            case 'F':
                cout << "remada curvada facil" << endl;
                cout << "tenha um bom treino";
                break;
            case 'M':
                cout << "remada curvada medio";
                break;
            case 'D':
                cout << "remada curvada dificil" << endl;
                cout << "contraia todos os musculos do abdomem";
            break;

            default : 
                cout<< " esse peso nao existe por aqui";
        }
        break;

    case 'Q':
        cout << "agachamento Hack" << endl;

        cout << "escolha o peso do exercicio (F = facil/ M = medio/ D = dificil)";
        cin >> peso;

        switch (peso) {
            case 'F':
                cout << "agachamento hack facil" << endl;
                cout << "HAHA, não existe agachamento facil";
                break;
            case 'M':
                cout << "agachamento hack medio";
                break;
            case 'D':
                cout << "agachamento hack dificil" << endl;
                cout << "melhor se concentrar se quiser sobreviver";
            break;

            default : 
                cout<< " esse peso nao existe por aqui";
        }
        break;
        
        default :
            cout<< "nao tem esse musculo";
}
return 0;
}