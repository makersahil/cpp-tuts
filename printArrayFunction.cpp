#include <iostream>
#include <cmath>

using namespace std;

void printArray(int arr[], int size);

int main() {
    
    int roll[] = {1, 2, 3, 4, 5, 6, 7};

    printArray(roll, 7);

}

void printArray(int arr[], int size) {
    cout << "Printing Array....." << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    cout << "Program Complete....." << endl;
}