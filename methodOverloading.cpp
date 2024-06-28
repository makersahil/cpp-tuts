#include <iostream>
#include <conio.h>

using namespace std;

class A {

    public:

        // different no. of parameters
        void sayHello() {
            cout << "First form!" << endl;
        }

        void sayHello(string s) {
            cout << "Second form with: " << s << endl;
        }

        void sayHello(string s, int a) {
                cout << "Third for with: " << s << " " << a << endl;
        }

        // different return type and parameter data type - only different return type cannot result in polymorphism. either different no. of parameters or parameter data type is needed   
        int add(int a, int b) {
                return a + b;
        }

        double add(double a, double b) {
                return a + b;
        }
};

int main() {

    A a;
    a.sayHello();
    a.sayHello("Sahil");
    a.sayHello("Sahil", 21);

    cout << a.add(2, 3) << endl;
    cout << a.add(1.5, 2.3) << endl;

return 0;
}