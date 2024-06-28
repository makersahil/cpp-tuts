#include <iostream>
#include <conio.h>

using namespace std;

class Animal {

    public:
        void speak() {
            cout << "Speaking" << endl;
        }

};

class Dog : public Animal {

    public:
        void speak() {
            cout << "Barking" << endl;
        }

};

class Cat : public Animal {

    public:
        void speak() {
            cout << "Meowing" << endl;
        }

};

int main() {

    Animal a;
    Dog d;
    Cat c;

    a.speak();
    d.speak();
    c.speak();

return 0;
}