#include <iostream>
#include <conio.h>
#include <stack>
#include <queue>

using namespace std;

int main() {

    stack <string> s;
    queue <string> q;

    s.push("One");
    s.push("Two");
    s.push("Three");
    cout << s.size() << endl;
    cout << s.top() << endl;

    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;

    cout << (s.empty() ? "true" : "false");

    q.push("One");
    q.push("Two");
    q.push("Three");
    cout << q.size() << endl;
    cout << q.front() << endl;

    q.pop();
    cout << q.size() << endl;
    cout << q.front() << endl;

    cout << (q.empty() ? "true" : "false");

    return 0;
}