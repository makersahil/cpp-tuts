#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    // int matrix[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8}
    // };

    int matrix[4][4] = {
        {},
        {}
    };

    for (int i = 0; i <= 1; i++)
    {   

        for (int j = 0; j <= 3; j++)
        {
            cout << "matrix[" << i << "]" << "[" << j << "]= ";
            cin >> matrix[i][j];
        }
    }

    // cout << matrix[0][2];

    for (int i = 0; i <= 1; i++)
    {   
        cout << "| ";
        for (int j = 0; j <= 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
    

    return 0;
}

