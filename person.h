#include <iostream>
#include<string>
#include <ctime>
using namespace std;

class Person{
protected:
    string firstName;
    string lastName;
    string passportNumber;
    int dateOfBirth;
    int currentYear() const;
public:
    Person(string ,string ,string ,int);
    Person();
    ~Person();
    
    string getFirstName() const;
    string getLastName() const;
    string getPassportNumber() const;
    int getDateOfBirth() const;
    
    void setPerson(string ,string ,string ,int);
    void setFirstName(string);
    void setLastName(string);
    void setPassportNumber(string);
    void setDateOfBirth(int);
    
    int calculateAge() const;
    
    friend ostream& operator << (ostream& , const Person&);
    friend istream& operator >> (istream& , Person&);
    
};
