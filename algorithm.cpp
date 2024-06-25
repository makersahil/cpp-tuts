#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1); 
    v.push_back(2); 
    v.push_back(5); 
    v.push_back(4); 
    v.push_back(3);

    for(auto i : v) { cout << i << " "; } 
    reverse(v.begin(), v.end());
    for(auto i : v) { cout << i << " "; } 
    cout << is_sorted(v.begin(), v.end()) << endl;
    cout << binary_search(v.begin(), v.end(), 2);
    sort(v.begin(), v.end());
    for(auto i : v) { cout << i << " "; } 

return 0;
}