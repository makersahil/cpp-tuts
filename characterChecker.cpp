#include <iostream>

using namespace std;

int main()
{

    char ch;

    cout<<"Enter a character";
    cin>>ch;

    if (ch >= 65 && ch <= 90) {
        cout<<"The character is UPPERCASE!"<<endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout<<"The character is LOWERCASE!"<<endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout<<"The character is a NUMBER!"<<endl;
    }
    else {
        cout<<"The character is a invalid!"<<endl;
    }


    return 0;
}