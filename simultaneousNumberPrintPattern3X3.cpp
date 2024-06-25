#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    int row = 3;
    int col = 3;
    int countRow = 1;
    int countCol = 1;
    int count = 1;

    while (countRow <= row)
    {
        countCol = 1;

        while (countCol <= col) {
            cout << (count) << " ";
            countCol++;
            count++;
        }

        countRow++;
        cout << endl;
    }
    
    

    return 0;
}

