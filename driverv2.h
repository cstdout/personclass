#include "person.h"
class Driver: public Person{
private:
    string _driverLicense;
    int _issueDate;
public:
    Driver(const string&, const string&, const string&, int, const string&, int);
    Driver();
    ~Driver();
   
    string getDriverLiscense() const;
    int getIssueDate() const;
    
    void setDriver(const string&, int);
    void setDriverLiscense(const string&);
    void setIssueDate(int);
    
    int calculateIssueDate() const;
    
    friend ostream& operator << (ostream& out, const Driver& dr);
    friend istream& operator >> (istream& in,  Driver& dr);

};
