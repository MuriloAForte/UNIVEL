#include <iostream>
#include <queue>
using namespace std;

int main () {

    queue<string> fila;

    fila.push("jacir");
    fila.push("dona sandra");
    fila.push("zé");

    cout << "primeiro da fila: " << fila.front() << endl;

    fila.pop();

    cout << "primeiro da fila agora : " << fila.front() << endl;

    cout << "quantidade restante na fila: " << fila.size() << endl;

    return 0;
}