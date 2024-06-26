#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Person {

    public:

        // properties
        char* title;
        string name;
        int age;

        // constructors - no return type, same name as class with ()

        // default constructor - automatically added by compiler if not explicitly mentioned!
        Person() {
            cout << "Default Constructor Called" << endl; // a constructor is automatically called by the compiler.
            title = new char[100];
        }

        // parameterized constructor
        Person(string name, int age) {
            this->name = name;
            this->age = age;
            cout << "Paremeterized Constructor Called!" << endl;;
        }

        // copy constructor
        // we pass by reference to copy constructor to avoid constructor calling loop (cosntructor <-> o)
        Person(Person& o) {
            // deep copy of dynamically allocated property avoiding shallow copy that just points to the same memory location
            char* ch = new char[strlen(o.title) + 1];
            strcpy(ch, o.title);
            this->title = ch;

            this->name = o.name;
            this->age = o.age;
            cout << "Copy constructor called!" << endl;
        }

        // Destructor
        ~Person() {
            cout << "Destructor Called For " << this->name << "!" << endl;
        }

        // methods
        void printDetails() {
            cout << "This person's name is " << this->name << " who is " << this->age << " years old.";
        }

        void setTitle(char name[]) {
            strcpy(this->title, name);
        }

};

int main() {

    Person p1; // statically defined object -> default constructor
    p1.name = "Ankit";
    p1.age = 18;
    char title[7] = "Gupta";
    p1.setTitle(title);
    cout << p1.title << endl;

    Person p("Subhash Sharma", 22); // paremeterized constructor
    cout << p.name << endl;
    cout << p.age << endl;

    Person* p2 = new Person(); // dynamically defined object -> default constructor

    Person* p3 = new Person("Sahil Gupta", 21); // parameterized constuctor called!
    cout << p3->name << endl;
    cout << (*p3).age << endl;

    Person p4 = p1; // copy constructor using assignment
    cout << p4.name << endl;
    cout << p4.age << endl;

    Person p5(p1); // copy constructor using argumentation
    cout << p5.name << endl;
    cout << p5.age << endl;
    cout << p5.title << endl;
    // Person* p5 = new Person(p3);

    {
        Person r; // destructor is called automatically for static decleration
        Person* d = new Person();
        delete d; // destructor should be manually called for dynamic decleration
    }

return 0;

}