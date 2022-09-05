#include <stdio.h>
#include <time.h>

time_t get_time();

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

  struct Account
  {
    int accountID;
    double total_amount;
    int max_people;
  };

  /*printf("Time in Milliseconds: %ld\n", get_time());*/

  clock_t t0;
  clock_t t1;
  clock_t delta_time;
  double res;

  t0 = clock();

  for (int i = 0; i < 10000000; i++)
  {
    res = res + i;
  }
  t0 = clock() - t0;

  printf("Delta time: %ld milliseconds\n", t0 / 1000);

  return 0;
};

time_t get_time()
{
  time_t seconds;
  seconds = time(NULL);
  return seconds;
};