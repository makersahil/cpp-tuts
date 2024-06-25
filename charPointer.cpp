#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    char ch[5] = "love";



    char* c = ch;

    cout << c << endl;
    cout << &c << endl;
    cout << *(c+1) << endl;

    // cout << arr << endl; 
    // cout << 1[arr] << endl;

    // for(int i = 0; i < size(arr); i++) {
    //     cout << *(arr + i) << endl;
    // }

    return 0;
}