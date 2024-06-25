#include <iostream>
#include <conio.h>

using namespace std;

class Complex {

    int x;
    int y;

    public: 
        void setData(int x1, int x2) {
            x = x1;
            y = x2;
        }

        void setDataBySum(Complex o1, Complex o2) {
            x = o1.x + o2.x;
            y = o1.y + o2.y;
        }

        void printData() {
            cout<<"The number is "<<x<<"+"<<y<<"i"<<endl;
        }

};

int main(){

    Complex o1, o2, o3;

    o1.setData(1, 2);
    o1.printData();

    o2.setData(3, 4);
    o2.printData();

    o3.setDataBySum(o1, o2);
    o3.printData();

    return 0;
    
}