#include <iostream>

using namespace std;

int main()
{

    int n = 10;
    int i = 0;
    int sumOfEvenNumbers = 0;

    while(i <= n)
    {
        i = i + 1;
        if (i % 2 == 0)
        {
            sumOfEvenNumbers = sumOfEvenNumbers + i;
        }
    }

    cout<<sumOfEvenNumbers;

    return 0;
}