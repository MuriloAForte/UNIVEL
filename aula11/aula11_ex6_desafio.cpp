#include <iostream>
#include <string>
using namespace std;

class Bola {                     
    public:
        virtual void quicar() = 0;
};

class bolabasquete : public Bola {  
    public:
        void quicar() override {
            cout << "quikk quikk" << endl;
        }
};

class bolafutebol : public Bola {   
    public:
        void quicar() override {    
            cout << "plim plim" << endl;
        }
};

int main() {
    bolabasquete b;  
    bolafutebol f;

    b.quicar();
    f.quicar();

    return 0;
}