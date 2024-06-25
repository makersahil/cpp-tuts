#include <iostream>
#include <conio.h>

using namespace std;

class A {

    int a, b;

    friend class B;
    public:
    void setValue() {
        a = 1;
        b = 2;
    }

};

class B {
    public:
    void printSum(A &a) {
        cout << a.a + a.b << endl;
    }

};

int main() {

    A num;
    num.setValue();

    B friendNum;
    friendNum.printSum(num);


    return 0;
}