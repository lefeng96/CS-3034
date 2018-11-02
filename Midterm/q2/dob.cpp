#include "dob.h"

double Dob::getAppetite() const {
  return appetite;
}

void Dob::setAppetite(double appetite) {
  Dob::appetite = appetite;
}

Dob::Dob(const string &name, double weight, double appetite )
    : Dog(name, weight), appetite(appetite) {}

void Dob::bark() {
  cout << this->getName() << ": Humf Humf Humf" << endl;
}

void Dob::attack(){
  cout<< this->getName() << " rips its victim to shreds"<<endl;
  this->setWeight(this->getWeight()+this->getAppetite());
}

Dob Dob::operator+(const Dob& add) {
  Dob *newDob = new Dob("Fused Dob",0,69);
    newDob->weight = this->weight + add.weight;
    return *newDob;
   }


ostream &operator<<(ostream &stream, const Dob &dob) {
  stream << dob.getName() << " is a Doberman and weighs " << dob.getWeight() << " grams." << "and has an appetite of " << dob.getAppetite();
  return stream;
}
