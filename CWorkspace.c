#include <stdio.h>

int main()
{

  int people[1000];

  struct Person
  {
    int age;
    char name;
    int customerID;
    float money_amount;
  };

  struct Account {
    int accountID;
    double total_amount;
    int max_people;
  };

  return 0;
};