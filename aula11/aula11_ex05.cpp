#include <iostream>
using namespace std;

//interface

class Animal {
    public:
        virtual void fazersom() = 0;
};

class cachorro: public Animal {
    public:
    void fazersom() override {

        cout << " AAAAUUUHHHHH" << endl;
    }
};

class Gato : public Animal {
    public:
        void fazersom() override {
            cout << " shut up bro, what's up?" << endl;
        }
};

int main () {

    cachorro c;
    Gato g;

    c.fazersom();
    g.fazersom();

    return 0;

}