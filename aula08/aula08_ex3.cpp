#include <iostream>
using namespace std;

int main () {

    #define NILIN 4
    #define NICOL 5
    
    int i,j;
    double laboratorio[NILIN][NICOL];

    for (i = 0; i<NILIN; i++){
        for (j = 0; j<NICOL; j++) {
            cout << "Digite o peso do aluno sentado: " << j <<  "fila" << i << endl;
            cin >> laboratorio[i][j];}}
        
    for (i=0; i<NILIN; i++)
            for (j=0; j<NICOL; j++)
            cout << " o peso do aluno" << j << "fila" << i << é << laboratorio [i][j] << endl;
            
            return 0;
}