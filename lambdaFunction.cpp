#include <iostream>
#include <conio.h>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

void printSquare(int x) {
    cout << (x * x) << endl;
}

int main() {

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    for_each(v.begin(), v.end(), printSquare); // using function reference
    for_each(v.begin(), v.end(), [](int i) {
        cout << sqrt(i) << endl;
    }); // using anonymous function or lambda expression

    auto square = [] (int i) {
        return i * i;
    };

    cout << square(v.at(3));

return 0;
}