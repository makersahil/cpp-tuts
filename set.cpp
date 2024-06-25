#include <iostream>
#include <conio.h>
#include <set>

using namespace std;

int main() {

    set <int> s;

    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(4);

    for(auto i : s) { cout << i << " "; }

    cout << s.count(2) << endl;

    set<int>::iterator it = s.begin();

    cout << *(s.end()) << endl; 

    cout << *(it) << endl;

    cout << *(s.lower_bound(2));

return 0;
}