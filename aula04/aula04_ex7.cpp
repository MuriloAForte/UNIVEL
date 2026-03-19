#include <iostream>
using namespace std;

int main ()
{
    int x = 5, y = 10, z = 0;

    cout << "o valor de x = " << x << endl;
    cout << " o valor de y  = " << y << endl;
    cout << "troquei os valores " << endl;


    z = x;
    y = x;
    x = 0;

    cout << " o valor de x  = " << x << endl;
    cout << " o valor de y = " << y << endl;
    x = x * -1; //trocando valore atraves do clculo
    cout << " o valor de x negativo = " << x <<  endl;
    return 0; 


}