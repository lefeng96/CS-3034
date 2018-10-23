#ifndef PAYCHECK
#define PAYCHECK

#include <vector>
#include <string>

using namespace std;

class Paycheck {

public:
  Paycheck(string id, string firstName, string lastName, double paycheck);

  Paycheck();

  string getPaycheck(const string &id, const string &firstName, const string &lastName, double paycheck);

  double getPaycheck() const;

  void setPaycheck(double paycheck);

  const string &getId() const;

  void setId(const string &id);

  const string &getFirstName() const;

  void setFirstName(const string &firstName);

  const string &getLastName() const;

  void setLastName(const string &lastName);

private:
  string id;
  string firstName;
  string lastName;
  double paycheck;
};


#endif // PAYCHECK
