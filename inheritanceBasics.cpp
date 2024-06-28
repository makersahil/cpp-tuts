#include <iostream>
#include <conio.h>

using namespace std;

class Human {

    // can be inherited and accessible by derived classes but not accessible to other classes
    protected:
        // static string species;
        string messege = "Protected Data Member";
    // accessible only within its class, cannot be inherited can be modified and accessed using getters & setters
    private:
        int aadharID;
    
    // universally accessible and inheritable
    public:
        string name;
        int height;
        int age;

        Human(string name, int height, int age, int aadharID) {
            this->name = name;
            this->height = height;
            this->age = age;
            setAadhar(aadharID);
        }

        int getAge() {
            return this->age;
        }

        void setAadhar(int aadharID) {
            this->aadharID = aadharID;
        }

        int getAadhar(int aadharID) {
            return aadharID;
        }

};

// string Human::species = "Homo Sapien";

class Male : public Human {

    public:
        Male(string name, int height, int age, int aadharID) : Human(name, height, age, aadharID) {
            
        }

        void getMessage() {
            cout << "From Male: " << this->messege << endl;
        }
};

class Female : public Human {
    public:
        Female(string name, int height, int age, int aadharID) : Human(name, height, age, aadharID) {
            
        }

        void getMessage() {
            cout << "From Female: " << this->messege << endl;
        }

        // void getAadharID() {
        //     cout << "From Female: " << this->aadharID << endl; // will cause and error as aadharID is not inherited
        // }
};

int main() {

    Male sahil("Sahil Gupta", 165, 21, 20059);
    Female nitu("Nitu Gupta", 155, 45, 90087);

    // accessing inherited protected data members cannot be accessed using object.member syntax
    sahil.getMessage();
    nitu.getMessage();

    // accessing protected data members
    cout << sahil.name << endl;
    cout << nitu.name << endl;
    cout << sahil.age << endl;
    cout << nitu.age << endl;

    return 0;
}