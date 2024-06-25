#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    int row = 3;
    int col = 3;
    int countRow = 1;
    int countCol = 1;

    while (countRow <= row)
    {
        countCol = 1;

        while (countCol <= col) {
            cout << (col - countCol + 1) << " ";
            countCol++;
        }

        countRow++;
        cout << endl;
    }
    
    

    return 0;
}

