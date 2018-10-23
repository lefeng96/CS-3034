#ifndef MOUSE
#define MOUSE


#include "prey.h"

class Mouse : public Prey {

public:
  Mouse(const string &name, double weight);

  void call() override;

  void flee() override;
};

#endif
