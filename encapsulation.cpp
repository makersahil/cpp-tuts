#include <iostream>
#include <conio.h>

using namespace std;

// Class works as a tool to implement encapsulation and decide which data to provide and which to hide : DATA HIDING
class Voter {

    // DATA HIDING
    private:
        long long aadharID;
        long long voterID;

    // AVAILABLE DATA
    public:
        string name;
        int age;
        bool isEligible;

        // CONSTRUCTOR
        Voter(string name, int age, long long aadharID, long long voterID) {
            this->name = name;
            this->age = age;
            this->isEligible  = (this->age >= 18) ? true : false;
            setAadharID(aadharID);
            setVoterID(voterID);
        }

        // SETTERS
        void setAadharID(long long aadharID) {
            this->aadharID = aadharID;
        }

        void setVoterID(long long voterID)  {
            this->voterID = voterID;
        }

        // GETTERS
        auto getAadharID() {
            return this->aadharID;
        }

        auto getVoterID() {
            return this->voterID;
        }

};

int main() {

    // DYNAMIC INITIALIZATION
    Voter* v = new Voter("Sahil Gupta", 21, 5432167890, 2345169087);

    // DATA ACCESS
    cout << v->name << endl;
    cout << v->age << endl;
    cout << (v->isEligible ? "True" : "False") << endl;
    cout << v->getAadharID() << endl;
    cout << v->getVoterID() << endl;

    return 0;
}