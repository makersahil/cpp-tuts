#include <iostream>
#include <conio.h>

using namespace std;

void print(int* p) {
    cout << *p << endl;
}

// updates pointer address of local scope
void updatePointer(int* p) {
    p = p + 1;
}

// updates value it points to
void updatePointerValue(int* p) {
    *p = *p + 1;
}

// int arr[] passed evaluates into int* arr
int getSum(int* arr, int n) {
    cout << endl << "Size: " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cout << sum << endl;
    }
    
    return sum;
}

int main() {

    int value = 5;
    int* ptr = &value;

     

    int arr[5] = {1, 6, 3, 7, 8};

    cout << getSum(arr, 5) << endl;

    // we can also pass part of array
    cout << getSum(arr + 2, 3);

    print(ptr);

    cout << "Before: " << *ptr << endl;
    updatePointer(ptr);
    cout << "After: " << *ptr << endl;

    cout << "Before: " << *ptr << endl;
    updatePointerValue(ptr);
    cout << "After: " << *ptr << endl;

    return 0;
}