#ifndef DOG
#define DOG

#include <iostream>

using namespace std;

class Dog {

public:
  Dog(const string &name, double weight);

  void eat(double weight);

  const string &getName() const;

  void setName(const string &name);

  double getWeight() const;

  void setWeight(double weight);

  virtual void bark() = 0;

  virtual ostream &operator<<(ostream &stream);


protected:
  string name;
  double weight;
};

#endif
