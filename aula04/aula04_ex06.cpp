#include <iostream>
using namespace std;

int main () {
    int n1, n2 = 1, n3 = 2, x = 3, y = 4, i = 5;

    x+= 3; // é iagual a x = x +3 e tem valor de x+3

    x*= y +1; // é igual  x = x * (y + 1) e tem valor x * (y + 1)

    x*= y++; 
     
    y = i++;

    y = ++i;

    cout << "entre com um numero inteiro ";
    cin>> n1;
    n1 += n1 *10;
    n2 = n1 /5;
    n3 = n2 % 5 * 7;
    n2 *= n3 -- % 4;
    cout << n2 << " " << n3 << " " << (n2 != n3 + 21) << endl;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;

    return 0;
}