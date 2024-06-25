#include <iostream>
#include <conio.h>

using namespace std;

class A {

    public:
    A() {
        cout << "A's constructor is called\n";
    }

    ~A() {
        cout << "A's destructor is called\n";
    }

};

class B {

    public:
    B() {
        cout << "B's constructor is called\n";
    }

    ~B() {
        cout << "B's destructor is called\n";
    }

};

class C : public A, public B {

    public:
    C() {
        cout << "C's constructor is called\n";
    }

    ~C() {
        cout << "C's destructor is called\n";
    }

};

int main() {

    {
        C c1;   
    }

    return 0;
}