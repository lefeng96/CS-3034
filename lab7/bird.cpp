#include "bird.h"

Bird::Bird(const string &name, double weight)
    : Prey(name, weight) {}

void Bird::flee() {
  cout << this->getName() << " flies away" << endl;
}

void Bird::call() {
  cout << this->getName() << " says 'i'ma burde!'" << endl;
}
