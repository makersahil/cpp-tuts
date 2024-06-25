#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float num, dec, numcpy;
    int n, last;
    
    cout << "Input number :";
    cin >> num;
    numcpy = num;
    dec = num - floor(num);
    num = numcpy;
    n = floor(num);
    if (n % 10 < 5)
    {
        n = (n / 10) * 10;
    }
    else if (n % 10 == 5)
    {
        if (dec > 0)
            n = (((n + 10) / 10) * 10);
        else
            n = (n / 10) * 10;
    }
    else
    {
        n = (((n + 10) / 10) * 10);
    }
    cout << "The rounded off number is: " << endl
         << n;
}