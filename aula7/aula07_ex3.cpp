#include <iostream>
#include <string>
using namespace std;

class TrataDivZero
{
    public:
        TrataDivZero(int n);
        void msg();
    private:
        int NLinha;
};
//criando objeto

TrataDivZero::msg()
{
        cout << "tratador de erro foi chamado ..." << endl;
        cout << "erro na linha : " << NLinha << endl;

}
inr main()
{
    int n, m;
    cout << "numerador";
    cin>> n;
    cout << "denominador";
    cin >> m;
    
    try 
    {
        if (m == 0 )
        {
            //lança a execuçao cria um objeto da classe tratadivzero
            //e passa o numero da linha onde errou
            throw (TrataDivZero(__LINE__));
            //naa é executado apos o throw, dentro deaste bloco 
        }
        cout << "divisao: " << (double)n/m << endl;
}//final do bloco
catch (TrataDivZero T) //pode ter ou nao o objeto /  apenas o tipo é obrigatorio
{
    T.msg();
}
catch (bad_alloc E)
{
    cout << "faltou memoria...\n"<< endl;

}//aqui  o objeto criado ( T ) nao existe mais

cout << "fim..." << endl;
system("pause");
return 0;
}