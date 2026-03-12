#include <iostream>

using namespace std;

int main()
{
    int var1, var2;


    cout << "primeiro numero: ";
    cin >> var1;





    cout << "segundo numero: ";
    cin >> var2;

    cout << var1+var2;
    cout << '\n';
    cout << var1-var2;
    cout << '\n';
    cout << var1*var2;
    cout << '\n';
    cout << var1/var2;
    cout << '\n';

    cout << var1 << " + " << var2 << " = " << var1+var2 << "\n"; 
    cout << var1 << " - " << var2 << " = " << var1-var2 << "\n"; 
    cout << var1 << " * " << var2 << " = " << var1*var2 << "\n"; 
    cout << var1 << " / " << var2 << " = " << var1/var2 << "\n";
    
    return 0;
}