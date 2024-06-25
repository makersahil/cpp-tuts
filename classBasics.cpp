#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Robot {

    public:
        string name;
        int id;
        bool humanoid;

        void speak() {

            cout << "Hi there! My name is " << this->name << "!" << endl;

        }

};

int main() {

    Robot sahil;


    sahil.name = "Mecha Sahil";
    sahil.id = 0001;
    sahil.humanoid = true;

    sahil.speak();

    // ============================

    auto something = 200;
    auto otherthing = "Hi there!";


    double number = 2.22;
    cout << number << endl;

    int intNumber = static_cast<int>(number);
    cout << intNumber << endl;

    cout << something << endl;
    cout << otherthing << endl;
    
    int* intPtr;

    intPtr = new int;

    *intPtr = 200;
    cout << *intPtr << endl;

    delete intPtr;
    cout << *intPtr << endl;

    return 0;
}