#include "dog.h"

Dog::Dog(const string &name, double weight)
    : name(name),
      weight(weight) {}

void Dog::eat(double weight) {
  double totalWeight = this->getWeight() + weight;
  this->setWeight(totalWeight);
}

const string &Dog::getName() const {
  return name;
}

void Dog::setName(const string &name) {
  Dog::name = name;
}

double Dog::getWeight() const {
  return weight;
}

void Dog::setWeight(double weight) {
  Dog::weight = weight;
}

ostream &Dog::operator<<(ostream &stream) {
  return stream;
}
