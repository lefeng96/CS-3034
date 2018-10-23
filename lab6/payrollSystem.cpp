#include <iostream>
#include "payrollSystem.h"
#include "paycheck.h"
using namespace std;

void PayrollSystem::add(string id, string firstName, string lastName, double wage, int hours) {
  Employee newEmployee(move(id), move(firstName), move(lastName), wage, hours);
  PayrollSystem::employees.push_back(newEmployee);
}
void PayrollSystem::del(string id) {
   int counter = 0;  for (auto &i : PayrollSystem::employees) {
    if (id == i.getId()) {
          PayrollSystem::employees.erase(PayrollSystem::employees.begin() + counter);
          break;
    }
    counter++;
  }
}
void PayrollSystem::payRoll() {
  Employee employee;  Paycheck paycheck;
  for (const auto &i : PayrollSystem::employees) {
        double pay = employee.pay(i.getWage(), i.getHours());
        cout << paycheck.getPaycheck(i.getId(), i.getFirstName(), i.getLastName(), pay);
        }
      }
void PayrollSystem::hours(string id, int hours) {
  for (auto &i : PayrollSystem::employees) {
    if (id == i.getId()) {
                  i.setHours(hours);
    }
  }
}
