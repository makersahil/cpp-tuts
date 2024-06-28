#include <iostream>
#include <conio.h>

using namespace std;

class Animal {
    public:
        string species;
        string sound;

        void speak() {
            cout << "From Animal" << endl;
        }
};

class Kingdom {
    public:
        string name;

        void enlighten() {
            cout << "From Kingdom" << endl;
        }
};

class Dog : public Animal, public Kingdom {

};

int main() {

    Dog d;
    d.speak();
    d.enlighten();

    return 0;
}