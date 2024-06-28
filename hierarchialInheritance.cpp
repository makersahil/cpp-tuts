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

class Animal : public Kingdom{
    public:
        string species;
        string sound;

        void speak() {
            cout << "From Animal" << endl;
        }
};


class Dog : public Animal {};

class Cat : public Animal {};



int main() {

    Dog d;
    Cat c;

    d.speak();
    d.enlighten();
    c.speak();
    c.enlighten();

    return 0;
}