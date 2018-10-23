#ifndef CAT
#define CAT


#include "predator.h"

class Cat : public Predator {


public:

  Cat(const string &name, double weight);

  void call() override;

  void predate(const Prey &prey) override;

  friend ostream &operator<<(ostream &stream, const Cat &cat);

};

#endif
