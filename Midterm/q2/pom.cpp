#include "pom.h"

Pom::Pom(const string &name, double weight)
    : Dog(name, weight) {}

void Pom::bark() {
  cout << this->getName() << ": Yap yap yap" << endl;
}

void Pom::attack(){
  cout<< this->getName() << " deafens its victim with a high pitched yapping"<<endl;
}

Pom Pom::operator+(const Pom& add) {
  Pom *newPom = new Pom("Fused Pom",0);
    newPom->weight = this->weight + add.weight;
    return *newPom;
   }

ostream &operator<<(ostream &stream, const Pom &pom) {
  stream << pom.getName() << " is a Pomeranian and weighs " << pom.getWeight() << " grams.";
  return stream;
}
