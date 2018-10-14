#include <iostream>
#include <unistd.h>
#include "payrollSystem.h"

using namespace std;

int main() {

  PayrollSystem payrollSystem;

  cout << "Employees added" << endl;
  payrollSystem.addEmployee("E0001", "Bob", "Ross", 30, 0);
  payrollSystem.addEmployee("E0002", "Cranberry", "Ocean", 100.50, 0);
  payrollSystem.addEmployee("E0003", "Crab", "Roll", 11.68, 0);
  payrollSystem.addEmployee("E0004", "Cranberry", "Desert", 69.25, 0);
  cout << endl;

  cout << "Work hours added" << endl;
  payrollSystem.recordHours("E0001", 5);
  payrollSystem.recordHours("E0002", 100);
  payrollSystem.recordHours("E0003", 95);
  payrollSystem.recordHours("E0004", 65);
  cout << endl;

  cout << "Payroll for Spicy Industries:" << endl;
  payrollSystem.issuePaycheck();
  cout << endl;

  cout << "Employee deleted" << endl;
  payrollSystem.findAndErase("E0002");
  cout << endl;

  cout << "New hours" << endl;
  payrollSystem.recordHours("E0001", 44);
  payrollSystem.recordHours("E0003", 10);
  payrollSystem.recordHours("E0004", 68);
  cout << endl;

  cout << "New payrolls" << endl;
  cout << endl;
  cout << "Payroll for Spicier Industries:" << endl;
  payrollSystem.issuePaycheck();
}
