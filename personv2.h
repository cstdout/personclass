#include <iostream>
#include<string>
#include <ctime>
using namespace std;

class Person{
protected:
    string _firstName;
    string _lastName;
    string _passportNumber;
    int _dateOfBirth;
public:
    static int getCurrentYear();
    Person(const string& firstName, 
           const string& lastName, 
           const string& passportName, 
           int dateOfBirth);
    Person();
    ~Person();
    
    string getFirstName() const;
    string getLastName() const;
    string getPassportNumber() const;
    int getDateOfBirth() const;
    
    void setPerson(const string& firstName, const string& lastName, const string& passportNumber, int dateOfBirth);
    void setFirstName(const string& firstName);
    void setLastName(const string& lastName);
    void setPassportNumber(const string& passportNumber);
    void setDateOfBirth(int d);
    
    int getAge() const;
    
    friend ostream& operator << (ostream& o, const Person& p);
    friend istream& operator >> (istream& i, Person& p);
    
};
