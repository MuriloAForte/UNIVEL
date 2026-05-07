#include <iostream>
#include <stack>
using namespace std;

int main () {

    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    cout << "primeiro numero da pilha é " << pilha.top() << endl;

    pilha.pop();

    cout << "primeiro da pilha agora : " << pilha.top() << endl;

    cout << "quantidade restante na pilha: " << pilha.size() << << endl;

    return 0;
}