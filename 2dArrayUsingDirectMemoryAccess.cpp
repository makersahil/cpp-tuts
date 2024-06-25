#include <iostream>
#include <conio.h>

using namespace std;

void increment(int& value) {
    value++;
}
 
int main() {
    int size_row, size_col;
    cout << "Enter the row size of array: ";
    cin >> size_row;
    cout << "\nEnter the column size of array: ";
    cin >> size_col;

    int** arr = new int*[size_row];

    for (int i = 0; i < size_row; i++)
    {
        arr[i] = new int[size_col];
    }

    for (int i = 0; i < size_row; i++)
    {
        for (int j = 0; j < size_col; j++)
        {
            cout << "Enter the element at arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        
    }
    
    for (int i = 0; i < size_row; i++)
    {
        for (int j = 0; j < size_col; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << endl;
        
    }


    
    

return 0;
}