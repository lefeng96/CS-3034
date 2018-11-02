#include <iostream>
#include <random>
#include <unistd.h>
#include "dob.h"
#include "pom.h"

using namespace std;

int main(){
  auto pom = new Pom("Garfield", 10000.69);
  auto pom1 = new Pom("Biggest", 10);
  cout << *pom << endl;
  pom->bark();
  pom->attack();
  pom->eat(41);
    cout << pom->getName() << " ate and is now " << pom->getWeight() << " grams." << endl;
    cout << *pom1 << endl;
    cout<<*pom+*pom1<<endl;
    cout<<endl;

  auto dob = new Dob("Dobby", 65000.69, 69);
  auto dob1 = new Dob("Old Dobby", 10, 69);
  cout << *dob << endl;
  dob->bark();
  dob->eat(490.2);
  dob->attack();
  cout << dob->getName() << " ate and now weighs " << dob->getWeight() << " grams." << endl;
  cout << *dob1 << endl;
  cout<<*dob+*dob1<<endl;
  return 0;
}
