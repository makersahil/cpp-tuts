#include <iostream>
#include <conio.h>

using namespace std;

class Hero {

    // by default properties are private
    int id;
    
    public:
        string name;
        int health;
        char level;

    // setter -> modifying private properties
    void setID(int id) {
        this->id = id;
    }

    // getter -> fething private properties
    int getID() {
        return id;
    } 

};


int main() {

    Hero h; // created object - static memory allocation
    
    // setting properties and methods
    h.name = "Sahil";
    h.health = 21;
    h.level = 'S';
    h.setID(1001); // setter

    // accessing properties and methods
    cout << h.name << endl;
    cout << h.health << endl;
    cout << h.level << endl;
    cout << h.getID() << endl; //getter

    Hero* hero = new Hero; // created object - dynamic memory allocation

    // setting properties and methods
    (*hero).name = "Sahil";
    (*hero).health = 21;
    (*hero).level = 'S';
    (*hero).setID(1001); // setter

    // accessing properties and methods
    cout << hero->name << endl;
    cout << hero->health << endl;
    cout << hero->level << endl;
    cout << hero->getID() << endl; //getter

    // just checking memory allocated
    cout << sizeof h << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;

return 0;
}