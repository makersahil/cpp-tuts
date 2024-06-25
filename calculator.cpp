#include <iostream>

using namespace std;

int main()
{

    int firstNum;
    int secondNum;

    cout<<"Enter First Number: ";
    cin>>firstNum;
    cout<<"Enter Second Number: ";
    cin>>secondNum;

    cout<<" firstNum + Seco5ndNum is "<<firstNum+secondNum<<endl;
    cout<<" firstNum - SecondNum is "<<firstNum-secondNum<<endl;
    cout<<" firstNum * SecondNum is "<<firstNum*secondNum<<endl;
    cout<<" firstNum / SecondNum is "<<(float)firstNum/secondNum<<endl;
 
    // =====================================

    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age>= 18){

        if(age>150){
            cout<<"Old man, you are dead";
        } else {
            cout<<"You can vote";
        }
    } else {
        cout<<"You cannot vote";
    }

    

    return 0;
}
