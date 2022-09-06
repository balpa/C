#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t get_time();
void create_random_array(int first_val, int second_val, int range);

int main(){
  clock_t t0;
  clock_t t1;
  clock_t delta_time;
  double res;

  t0 = clock();
  for (int i = 0; i < 10000000; i++){
    res = res + i;
  }
  t0 = clock() - t0;
  printf("Delta time: %ld milliseconds\n", t0 / 1000);

  create_random_array(-10, 50, 100);

  return 0;
};

void create_random_array(int first_val, int second_val, int range){
  int rand_array[range];
  for (int i = 1; i < range; i++){
    rand_array[i] = (rand() % (first_val - second_val + 1)) + first_val;
  };

  for (int x = 1; x < range; x++){
    printf("Array index: %d, and the value is: %d\n", x, rand_array[x]);
  };
}

time_t get_time(){
  time_t seconds;
  seconds = time(NULL);
  return seconds;
};