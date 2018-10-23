#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>

using namespace std;

class Employee {

public:
  Employee(string id, string firstName, string lastName, double wage, int hours);

  Employee();

  double pay(double wage, int hours);

  const string &getId() const;

  void setId(const string &Id);

  const string &getFirstName() const;

  void setFirstName(const string &firstName);

  const string &getLastName() const;

  void setLastName(const string &lastName);

  double getWage() const;

  void setWage(double wage);

  int getHours() const;

  void setHours(int hours);

private:
  string id;
  string firstName;
  string lastName;
  double wage;
  int hours;
};


#endif // EMPLOYEE
