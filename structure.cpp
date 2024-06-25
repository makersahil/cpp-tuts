#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Car {

    string name; // whats the bad guy's name
    string model; // model?
    string color; // what color it is
    int topSpeed; // for the top speed
    int mileage; // will store the mileage of the car
    char rating[]; // "A" | "B" | "C" | "S" | "F" | "X"

};

void printCarDetails(string name, string model, string color, int topspeed, int mileage) {

    cout << "The car name is " << name
         << ". The car model is " << model
         << ". The car color is " << color
         << ". The car topspeed is " << topspeed
         << ". The car mileage is " << mileage << "." << endl;

}

int main() {

    Car nissanGtr;
    nissanGtr.name = "Nissan";
    nissanGtr.model = "GTR";
    nissanGtr.color = "Silvery Black";
    nissanGtr.mileage = 20;
    nissanGtr.topSpeed = 320;

    printCarDetails(nissanGtr.name, nissanGtr.model, nissanGtr.color, nissanGtr.topSpeed, nissanGtr.mileage);

    return 0;

}