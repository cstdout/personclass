#include "person.h"
class Driver: public Person{
private:
    string driverLiscence;
    int issueDate;
public:
    Driver(string, string, string, int, string, int);
    Driver();
    ~Driver();
   
    string getDriverLiscense() const;
    int getIssueDate() const;
    
    void setDriver(string,int);
    void setDriverLiscense(string);
    void setIssueDate(int);
    
    int calculateIssueDate() const;
    
    friend ostream& operator << (ostream& out, const Driver& dr);
    friend istream& operator >> (istream& in,  Driver& dr);

};
