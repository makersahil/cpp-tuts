#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main() {

    vector <int> v; //decleration

    vector <int> a(5, 2);

    vector <int> x(a);

    cout << v.capacity() << endl; // size of vector

    // appending elements 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int x : v) { cout << x; }
    cout << endl;
    for(int x : a) { cout << x; }
    cout << endl;
    for(int x : x) { cout << x; }
    cout << endl;

    cout << v.back() << endl; // printing last element

    // popping last element
    v.pop_back();

    cout << v.back() << endl; // checking if 4 is popped

    cout << v.size() << endl; // returns no. of elements

return 0;
}