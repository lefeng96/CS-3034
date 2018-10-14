#include <iostream>
#include <sstream>
#include <iomanip>
#include "paycheck.h"

using namespace std;

Paycheck::Paycheck(string id, string firstName, string lastName, double paycheckAmount)
    : id(move(id)),
      firstName(move(firstName)),
      lastName(move(lastName)),
      paycheckAmount(paycheckAmount) {}

Paycheck::Paycheck() = default;

string Paycheck::getPaycheck(const string &id, const string &firstName, const string &lastName, double paycheckAmount) {

  stringstream stream;
  stream << fixed << setprecision(2) << paycheckAmount;
  string check = stream.str();

  return "Employee #" + id + ": Paycheck for $" + check + ". Issued to " + firstName + " " + lastName + "\n";
}

double Paycheck::getPaycheckAmount() const {
  return paycheckAmount;
}

void Paycheck::setPaycheckAmount(double paycheckAmount) {
  Paycheck::paycheckAmount = paycheckAmount;
}

const string &Paycheck::getId() const {
  return id;
}

void Paycheck::setId(const string &id) {
  Paycheck::id = id;
}

const string &Paycheck::getFirstName() const {
  return firstName;
}

void Paycheck::setFirstName(const string &firstName) {
  Paycheck::firstName = firstName;
}

const string &Paycheck::getLastName() const {
  return lastName;
}

void Paycheck::setLastName(const string &lastName) {
  Paycheck::lastName = lastName;
}
