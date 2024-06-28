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

        void speak() {
            cout << "From Kingdom" << endl;
        }
};

class Dog : public Animal, public Kingdom {

};

int main() {

    Dog d;

    // resolved ambiguity by mentioning class name whose method should be accessed.
    d.Animal::speak();
    d.Kingdom::speak();

    return 0;
}