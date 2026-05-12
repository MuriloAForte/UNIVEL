#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    
    stack<string> estoque;

    
    queue<string> pedidos;

    int opcao;

    do {
        cout << "\n --Estoque--" << endl;
        cout << "1 - Adicionar produto ao estoque" << endl;
        cout << "2 - Ver topo do estoque" << endl;
        cout << "3 - Retirar produto do estoque" << endl;
        cout << "4 - Adicionar pedido na fila" << endl;
        cout << "5 - Atender proximo pedido" << endl;
        cout << "6 - Ver proximo pedido da fila" << endl;
        cout << "7 - Ver quantidade no estoque e na fila" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            string produto;
            cout << "Nome do produto: ";
            getline(cin, produto);
            estoque.push(produto);
            cout << "Produto \"" << produto << "\" adicionado ao estoque!" << endl;

        } else if (opcao == 2) {
            if (estoque.empty()) {
                cout << "Estoque vazio!" << endl;
            } else {
                cout << "Topo do estoque: " << estoque.top() << endl;
            }

        } else if (opcao == 3) {
            if (estoque.empty()) {
                cout << "Estoque vazio, nada para retirar!" << endl;
            } else {
                cout << "Produto retirado: " << estoque.top() << endl;
                estoque.pop();
            }

        } else if (opcao == 4) {
            string pedido;
            cout << "Nome do pedido/cliente: ";
            getline(cin, pedido);
            pedidos.push(pedido);
            cout << "Pedido \"" << pedido << "\" adicionado a fila!" << endl;

        } else if (opcao == 5) {
            if (pedidos.empty()) {
                cout << "Nenhum pedido na fila!" << endl;
            } else {
                cout << "Atendendo pedido: " << pedidos.front() << endl;
                pedidos.pop();
            }

        } else if (opcao == 6) {
            if (pedidos.empty()) {
                cout << "Fila de pedidos vazia!" << endl;
            } else {
                cout << "Proximo pedido: " << pedidos.front() << endl;
            }

        } else if (opcao == 7) {
            cout << "Produtos no estoque: " << estoque.size() << endl;
            cout << "Pedidos na fila: " << pedidos.size() << endl;

        } else if (opcao != 0) {
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    cout << "\nSistema encerrado." << endl;
    return 0;
}