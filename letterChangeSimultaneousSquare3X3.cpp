#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    char letter = 'A';

    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 3; j++)
        {
            cout << letter << " ";
            letter++;
        }
        cout << endl;   

    }    
    

    return 0;
}

