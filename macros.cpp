#include <iostream>
#include <conio.h>

#define PI 3.14 // Object Like

#define SQUARE(x) (x * x) // Function Like

// Multiline
#define PRINT_RECTANGLE(width, height)          \
    for (int i = 0; i < height; i++)            \
    {                                           \
        for (int j = 0; j < width; j++)         \
        {                                       \
            cout << "*";                        \
        }                                       \
        cout << endl;                                                               \
    }        

// Chain Macro
#define CLERK 10

#define WORKER CLERK
    
using namespace std;

int main() {

    // Object Like Macros

    float radius = 2.3;

    float area = PI * radius * radius;

    cout << "The area of the circle is: " << area << endl;

    // Function Like Macros

    int square = SQUARE(4);

    cout << "The square of 4 is: " << square << endl;

    // MultiLine Macros

    PRINT_RECTANGLE(4, 3);

    // Chain Macro

    cout << WORKER << endl;


return 0;
}