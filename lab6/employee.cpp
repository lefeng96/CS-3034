#include <iostream>
#include "employee.h"

using namespace std;

Employee::Employee() = default;

Employee::Employee(string id, string firstName, string lastName, double wage, int hours)
    : id(move(id)),
      firstName(move(firstName)),
      lastName(move(lastName)),
      wage(wage),
      hours(hours) {}

double Employee::pay(double wage, int hours) {

  double totalPay = wage * hours;

  return totalPay;
}

const string &Employee::getId() const {
  return id;
}

void Employee::setId(const string &Id) {
  Employee::id = id;
}

const string &Employee::getFirstName() const {
  return firstName;
}

void Employee::setFirstName(const string &firstName) {
  Employee::firstName = firstName;
}

const string &Employee::getLastName() const {
  return lastName;
}

void Employee::setLastName(const string &lastName) {
  Employee::lastName = lastName;
}

double Employee::getWage() const {
  return wage;
}

void Employee::setWage(double wage) {
  Employee::wage = wage;
}

int Employee::getHours() const {
  return hours;
}

void Employee::setHours(int hours) {
  Employee::hours = hours;
}
