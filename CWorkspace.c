#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t get_time();
void create_random_array(int first_val, int second_val, int range);
void guess_number();
void hangman();
void draw_pyramid(int base, int height);

int main(){
  srand(time(NULL));
  clock_t t0;
  clock_t t1;
  clock_t delta_time;
  double res;

  t0 = clock();
  guess_number();
  t0 = clock() - t0;
  printf("Delta time: %ld milliseconds\n", t0 / 1000);

  return 0;
};

void draw_pyramid(int base, int height){
  char PT = "%";
  char DL = "$";
  int BACKING_VAL;
  BACKING_VAL = base/2;

  for(int i=0; i<(height-(height/4)); i++){
    continue;
  }

}

void hangman(){
  
}

void guess_number(){
  int NUMBER;
  int CURRENT_GUESS;
  CURRENT_GUESS=0;
  NUMBER = rand()%100;
  while(NUMBER!=CURRENT_GUESS){
    printf("Guess a number: ");
    scanf("%d", &CURRENT_GUESS);
    if(CURRENT_GUESS<NUMBER){
      printf("Guess a larger number!\n");
    }else if(CURRENT_GUESS>NUMBER){
      printf("Guess a smaller number!\n");
    }else{
      printf("Congratulations!, number was: %d\n", NUMBER);
      break;
    }
  }
};

void create_random_array(int first_val, int second_val, int range){

  int rand_array[range];
  for (int i = 0; i < range; i++){
    rand_array[i] = (rand() % (first_val - second_val + 1)) + first_val;
  };
  for (int x = 0; x < range; x++){
    if(x==range-1){
      printf("%d\n", rand_array[x]);
    }else{
      printf("%d, ",rand_array[x]);
    }
  };
};

time_t get_time(){
  time_t seconds;
  seconds = time(NULL);
  return seconds;
};