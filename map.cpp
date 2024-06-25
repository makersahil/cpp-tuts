#include <iostream>
#include <conio.h>
#include <map>

using namespace std;

int main() {

    map <int, string> m;

    m[1] = "Sahil";
    m[2] = "Ankit";
    m[3] = "Aryan";
    m[4] = "Nischal";

    for(auto key : m) {
        cout << "The value at " << key.first << " is " << key.second << endl;
    }

    m.insert({5, "Tannu"});
    m.erase(3);

    for(auto key : m) {
        cout << "The value at " << key.first << " is " << key.second << endl;
    }

    cout << m.count(2) << endl;
return 0;
}