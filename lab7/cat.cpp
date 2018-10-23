#include "cat.h"

Cat::Cat(const string &name, double weight)
    : Predator(name, weight) {}

void Cat::call() {
  cout << this->getName() << " says 'nyaa!'" << endl;
}

ostream &operator<<(ostream &stream, const Cat &cat) {
  stream << cat.getName() << " is a meow and weighs " << cat.getWeight() << " grams.";
  return stream;
}

void Cat::predate(const Prey &prey) {
  cout << this->getName() << " pounces and devours " << prey.getName() << ", who weighs " << prey.getWeight()
       << " grams." << endl;
  eat(prey.getWeight());
}
