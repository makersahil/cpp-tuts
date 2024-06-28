#include <iostream>
#include <conio.h>

using namespace std;

class Kingdom {
    public:
        string name;

        void enlighten() {
            cout << "From Kingdom" << endl;
        }
};

class Animal : public Kingdom {
    public:
        string species;
        string sound;

        void speak() {
            cout << "From Animal" << endl;
        }
};


class Dog : public Animal{

};

int main() {

    Dog d;
    d.speak();
    d.enlighten();

    return 0;
}