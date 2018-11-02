#ifndef DOB
#define DOB


#include "dog.h"

class Dob : public Dog {


public:

  Dob(const string &name, double weight, double appetite);

  void bark() override;

  friend ostream &operator<<(ostream &stream, const Dob &dob);

  void attack();

  double getAppetite() const;

  void setAppetite(double appetite);

  Dob operator+(const Dob& add);

  protected:
    double appetite;
};

#endif
