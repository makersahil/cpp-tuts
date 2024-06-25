#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

int main() {

    list <int> l;

    l.assign(5, 2); // specifies sizes and initializes all with a value

    for(int x : l) {cout << x << " ";}

    cout << l.size() << endl;

    l.pop_back();
    l.pop_front();
    
    for(int x : l) {cout << x << " ";}

    cout << l.size() << endl;

    l.emplace_front(3);
    l.erase(l.begin());

    for(int x : l) {cout << x << " ";}

return 0;
}