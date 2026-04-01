#include <iostream>
using namespace std;

int main () {

    int num;

    cout << "digite um numer para ver a tabuada";
    cin >> num;
    cout << "tabuada de" << num << ":" << endl;
    //loop para gerar a tabuada for

    for( int i = 1; i<= 10; i++) {
            cout << num << " x " << i << " = " << num *i << endl; 
    }
    return 0;
}