#include <iostream>
#include <conio.h>

using namespace std;

void updatePointer(int** p) {
    // p = p + 1; // Mp Change

    // *p = *p + 1; // address of ptr chagnes

    **p = **p + 1; // value of value changes
}

int main() {

    int value = 5;
    int* ptr = &value;

    int** ptr2 = &ptr;

    cout << ptr2 << endl;
    cout << &ptr << endl;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl; 

    cout << "Before: " << value << endl;
    cout << "Before: " << ptr << endl;
    cout << "Before: " << ptr2 << endl;
    updatePointer (ptr2);
    cout << "After: " << value << endl;
    cout << "After: " << ptr << endl;
    cout << "After: " << ptr2 << endl;

    return 0;
}