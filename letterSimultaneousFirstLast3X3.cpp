#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    char letter = 'A';

    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 3; j++)
        {
            char res = letter + j - 1;
            cout << res << " ";
        }
        letter++;
        cout << endl;   

    }    
    

    return 0;
}

