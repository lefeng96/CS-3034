#include "mouse.h"

Mouse::Mouse(const string &name, double weight)
    : Prey(name, weight) {}

void Mouse::call() {
  cout << this->getName() << " says `reeeeeeeeeeeee!`" << endl;
}

void Mouse::flee() {
  cout << this->getName() << " scampers off" << endl;
}
