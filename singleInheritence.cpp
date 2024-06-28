#include <iostream>
#include <conio.h>

using namespace std;

class Animal {
    public:
        string species;
        string sound;

        void speak() {
            cout << "Inherited" << endl;
        }
};

class Dog : public Animal {

};

int main() {

    Dog d;
    d.speak();

    return 0;
}