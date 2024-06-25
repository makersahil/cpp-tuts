#include <iostream>

using namespace std;

int main()
{

    int F = 0;
    float C = 0;
    int i = 0;

    while (i < 10)
    {
        F = F + 1;
        C = (float)5/9*(F-32);
        cout<<F<<" "<<C<<endl;

        i = i + 1;
    }

    return 0;
}