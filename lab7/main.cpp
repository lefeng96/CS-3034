#include <iostream>
#include <vector>
#include <random>
#include <unistd.h>
#include <ctime>
#include "cat.h"
#include "bird.h"
#include "mouse.h"

using namespace std;

int main() {

  auto cat = new Cat("Garfield", 10000.69);
  cout << *cat << endl;
  cat->call();

  vector<Prey *> prey;

  auto bird1 = new Bird("Big Burde", 6522.1);
  auto bird2 = new Bird("Smol Burde", 100);
  auto bird3 = new Bird("Turkey", 1000);
  auto mouse1 = new Mouse("Smol Mouse", 20.5);
  auto mouse2 = new Mouse("Big Mouse", 1000);

  prey.emplace_back(bird1);
  prey.emplace_back(bird2);
  prey.emplace_back(bird3);
  prey.emplace_back(mouse1);
  prey.emplace_back(mouse2);

  srand(time(NULL));
  for (Prey *p : prey) {
    cout << endl;
    p->call();
    double random = (double) rand() / (double) RAND_MAX;
    if (random < 0.5) {
      cat->predate(*p);
    } else {
      p->flee();
    }
  }
  cout<<endl;
  cout << cat->getName() << " is a bad kitty cat and now weighs " << cat->getWeight() << " grams." << endl;

  return 0;
}
