#include <iostream>
#include <conio.h>
#include <deque>

using namespace std;

int main() {

    deque <int> d;

    for(int i : d) { cout << i; }

    d.push_front(1);
    cout << d.front() << endl;
    d.push_front(2);
    cout << d.front() << endl;
    d.push_back(3);
    for(int i : d) { cout << i; }
    cout << d.back() << endl;
    d.pop_front();
    d.pop_back();
    cout << d.front() << " " << d.back() << endl;

    for(int i : d) { cout << i; }

return 0;
}