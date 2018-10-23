#ifndef PREY
#define PREY


#include "animal.h"

class Prey : public Animal {

public:
  Prey(const string &name, double weight);

  virtual void flee() = 0;
};

#endif
