#include <iostream>
using namespace std;


int main () {

    int k = 10, j = 10;


    cout << "antes do pre fixado" << k << "\n";
    cout << "durante do pre fixado" << ++k <<"\n";
    cout << "depois do pre fixado" << k << "\n";

    
    cout << "antes do pos fixado" << j << "\n";
    cout << "durante do pos fixado" << j++ <<
    "primeiro imprime o valor depois soma\n";
    cout << "depois do pos fixado" << j << "\n";
    return 0;


}