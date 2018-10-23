#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM

#include <vector>
#include "employee.h"

class PayrollSystem {

public:
  void add(string id, string firstName, string lastName, double wage, int hours);

  void del(string id);

  void hours(string id, int hours);

  void payRoll();

  vector<Employee> employees;

};

#endif
