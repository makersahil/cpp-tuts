#include <iostream>
#include <conio.h>
#include <array>

using namespace std;

int main() {

    array<int, 4> arr = {1, 2, 3, 4};
    array<int, 4> a = {5, 6, 7};

    cout << arr.front() << endl;

    cout << arr.back() << endl;

    cout << arr.size() << endl;

    cout << arr.at(2) << endl;

    arr.swap(a);

    cout << a.front() << endl;
    cout << arr.front() << endl;

    cout << arr.begin() << endl;

    cout << *(arr.data() + 2) << endl;

return 0;
}