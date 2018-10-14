#include <iostream>
#include "payrollSystem.h"
#include "paycheck.h"
using namespace std;

void PayrollSystem::addEmployee(string id, string firstName, string lastName, double wage, int hours) {
  Employee newEmployee(move(id), move(firstName), move(lastName), wage, hours);
  PayrollSystem::employees.push_back(newEmployee);
}
void PayrollSystem::findAndErase(string id) {
   int counter = 0;  for (const auto &i : PayrollSystem::employees) {
    if (id == i.getId()) {
          PayrollSystem::employees.erase(PayrollSystem::employees.begin() + counter);
          break;
    }
    counter++;
  }
}
void PayrollSystem::issuePaycheck() {
  Employee employee;  Paycheck paycheck;
  for (const auto &i : PayrollSystem::employees) {
        double pay = employee.calcPay(i.getWage(), i.getHours());
        cout << paycheck.getPaycheck(i.getId(), i.getFirstName(), i.getLastName(), pay);
        }
      }
void PayrollSystem::recordHours(string id, int hours) {
  for (auto &i : PayrollSystem::employees) {
    if (id == i.getId()) {
                  i.setHours(hours);
    }
  }
}
