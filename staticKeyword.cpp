#include <iostream>
#include <conio.h>

using namespace std;

class Person {

    public:
        string name;
        int age;

        // static data member - class level - shared memory for all objects
        static int maxAge;

        // static method - can only access static data member
        static void printMaxAge() {
            cout << maxAge << endl; // can't use this keyword as its not instance scoped
        }

        void printDetails() {
            cout << "This person's name is " << this->name << " who is " << this->age << " years old.";
        }

};

int Person::maxAge = 65;

int main() {

    cout << Person::maxAge << endl;
    Person::printMaxAge();


    Person a, b, c;

    // proof of shared memory
    cout << a.maxAge << endl;
    cout << b.maxAge << endl;
    cout << c.maxAge << endl;

return 0;
}