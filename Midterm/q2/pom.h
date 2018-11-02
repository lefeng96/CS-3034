#ifndef POM
#define POM


#include "dog.h"

class Pom : public Dog {


public:

  Pom(const string &name, double weight);

  void bark() override;

  friend ostream &operator<<(ostream &stream, const Pom &pom);

  void attack();

  Pom operator+(const Pom& add);

};

#endif
