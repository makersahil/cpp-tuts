#include <iostream>
// #include <cmath>

using namespace std;


int main() {

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    int input;
    bool found;
    cout << "Enter the element to search in matrix -> ";
    cin >> input;
    // cout << matrix[0][2];

    for (int i = 0; i <= 1; i++)
    {   
        for (int j = 0; j <= 3; j++)
        {
            if (matrix[i][j] == input) {
                cout << "Element found at row " << i + 1 << " and coulumn " << j + 1 << "!" << endl;
                found = true;
                break; 
            } 
        }
        
    }
    
    if(!found) {
    cout << "The element does not exist in the matrix!";
    }

    

    return 0;
}

