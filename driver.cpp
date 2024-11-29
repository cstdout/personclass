#include <iostream>
#include <string>
#include "driverv2.h"
using namespace std;

Driver::Driver(const string& firstName, const string& lastName, const string& passportNumber, int dateOfBirth, const string& driverLicense, int issueDate)
{
  setPerson(firstName, lastName, passportNumber, dateOfBirth);
  setDriver(driverLicense, issueDate);
}
Driver()
{
  driverLicense = "";
  issueDate = 1900;
}
~Driver();

string getDriverLiscense() const
{
  return _driverLicense;
}
int getIssueDate() const
{
  return _issueDate;
}

void setDriver(const string& driverLicense, int issueDate)
{
  setDriverLiscense(driverLicense);
  setIssueDate(issueDate);
}
void setDriverLiscense(const string& driverLicense)
{
  if(driverLicense.length() > 0)
  {
    _driverLicense = driverLicense;
  }
  else
  {
    cout << "Driver license was not specified" << endl;
  }
  
}
void setIssueDate(int issueDate)
{
  if (issueDate > 0)
  {
    _issueDate = issueDate;
  }
  else
  {
     cout << "Issue date must be positive" << endl;
  }
  
}

int calculateIssueDate() const;

friend ostream& operator << (ostream& out, const Driver& dr)
{
  out << dr << ' ' << dr.getDriverLiscense() << ' ' << dr.getIssueDate();
  return out;
}
friend istream& operator >> (istream& in,  Driver& dr);
{
  string driverLicense;
  int issueDate;
  in >> dr >> dirverLicense >> issueDate;
  return in;
}

