#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    int row = 4;
    int col = 4;

    for (int i = 0; i < row; i++)
    {

        int count = 1;

        for (int j = 0; j < col; j++, count++)
        {
            cout << count << " ";
        }

        cout << endl;
        
    }
    

    return 0;
}
