#include <iostream>
#include <string>
#include <ctime>
#include "personv2.h"
using namespace std;


static int Person::getCurrentYear() 
{
    time_t now = time(0);//0, NULL, nullptr;  1970
    tm* ltm = localtime(&now);
    return ltm->tm_year+1900;    
}
Person::Person(const string& firstName, 
       const string& lastName, 
       const string& passportName, 
       int dateOfBirth)
   {
        setPerson(firstName, lastName, passportName, dateOfBirth);
   }
Person::Person()
{
    _firstName = "";
    _lastName = "";
    _passportNumber = "";
    _dateOfBirth = 1900;
}
Person::~Person()
{
    
}

string  Person::getFirstName() const
{
    return _firstName;
}
string  Person::getLastName() const
{
    return _lastName;
}
string  Person::getPassportNumber() const
{
    return _passportNumber;
}
int  Person::getDateOfBirth() const
{
    return _dateOfBirth;
}

void  Person::setPerson(const string& firstName, const string& lastName, const string& passportNumber, int dateOfBirth)
{
    setFirstName(firstName);
    setLastName(lastName);
    setPassportNumber(passportNumber);
    setDateOfBirth(dateOfBirth);

}
void  Person::setFirstName(const string& firstName)
{
    if(firstName.length() > 0) 
    {
        _firstName = firstName;
    }
    else
    {
        cout << "Empty first name passed" << endl;
    }
}
void  Person::setLastName(const string& lastName)
{
    if(lastName.length() > 0)
    {
        _lastName = lastName;
    }
    else
    {
        cout << "Empty last name passed" << endl;
    }
}
void  Person::setPassportNumber(const string& passportNumber)
{
    if(passportNumber.length() > 0)
    {
         _passportNumber = passportNumber;
    }
    else
    {
        cout << "Empty passport number passed" << endl;
    }
}
void  Person::setDateOfBirth(int d) 
{
    if (d > 0)
    {
        _dateOfBirth = d;
    }
    else
    {
        cout << "Year must be positive" << endl;
    }
}

int  Person::getAge() const
{
    return getCurrentYear() - _dateOfBirth;
}

ostream&  Person::operator << (ostream& o, const Person& p)
{
    o << p.getFirstName() << ' ' << p.getLastName() << ' ' << p.getPassportNumber() << ' ' << p.getDateOfBirth();
    return o;
}
istream&  Person::operator >> (istream& i, Person& p)
{
    string firstName, lastName, passportNumber;
    int dateOfBirth;
    i >> firstName >> lastName >> passportNumber >> dateOfBirth;
    p.setPerson(firstName, lastName, passportNumber, dateOfBirth);
    return i;
}
    


int main() {
    // Person p("John", "Smith", "1234", 1985);
    // cout << p;
    
    Person p;
    cin >> p;

    return 0;
}
