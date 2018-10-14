#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM


#include <vector>
#include "employee.h"

class PayrollSystem {

public:
  void addEmployee(string id, string firstName, string lastName, double wage, int hours);

  void findAndErase(string id);

  void recordHours(string id, int hours);

  void issuePaycheck();

  vector<Employee> employees;

};

#endif
