#include <iostream>
#include <conio.h>

using namespace std;

class Reverse {

    public:
        int a, b;

        auto operator+ (Reverse& o) {
            return (this->a - o.a);
        }

        void operator() () {
            cout << "Brackets Called" << endl;
        }

};

int main() {

    Reverse a, b;
    a.a = 3;
    b.a = 4;

    cout << a + b << endl;
    a();

return 0;
}