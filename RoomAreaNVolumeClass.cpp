#include <iostream>

using namespace std;

class Room {
    public:
        double length;
        double breadth;
        double height;
        
        double calculateArea() {
            return length * breadth;
        }

        double calculateVolume() {
            return length * breadth * height;
        }
};

int main() {

    Room myRoom;

    myRoom.length = 42.5;
    myRoom.breadth = 30.8;
    myRoom.height = 19.2;

    cout << "Area of Room= " << myRoom.calculateArea() << endl;
    cout << "Volume of Room= " << myRoom.calculateVolume() << endl;

    return 0;

}


