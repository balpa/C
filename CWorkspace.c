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
  create_random_array(-10, 80, 10000);  
  t0 = clock() - t0;
  printf("Delta time: %ld milliseconds\n", t0 / 1000);

  return 0;
};

void create_random_array(int first_val, int second_val, int range){

  int rand_array[range];
  for (int i = 0; i < range; i++){
    rand_array[i] = (rand() % (first_val - second_val + 1)) + first_val;
  };
  for (int x = 0; x < range; x++){
    if(x==range-1){
      printf("%d\n", rand_array[x]);
    }
    else {
      printf("%d, ",rand_array[x]);
    }
  };
};

time_t get_time(){
  time_t seconds;
  seconds = time(NULL);
  return seconds;
};