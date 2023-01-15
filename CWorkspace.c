#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

time_t get_time();
void create_random_array(int first_val, int second_val, int range);
void guess_number();
void hangman();
void draw_pyramid(int base, int height);
void RPS();

int main(){
  srand(time(NULL));
  clock_t t0;
  clock_t t1;
  clock_t delta_time;
  double res;

  t0 = clock();
  RPS();
  t0 = clock() - t0;
  printf("Delta time: %ld milliseconds\n", t0 / 1000);

  return 0;
};

void RPS(){
  int PC_SCORE;
  int USER_SCORE;
  PC_SCORE = 0;
  USER_SCORE = 0;
  bool run;
  run = true;
  //cannot fix the warning
  char options [3][10] = {"rock", "scissors", "paper"};
  printf("%s\n", options[rand() % 3]);

  while (run){
    char current_pc;
    char current_user[15];
    current_pc = options[rand() % 3];
    printf("Enter: ");
    scanf("%s", &current_user);
    if (current_user == current_pc){
      printf("Draw! Go again.");
    } else if (current_user == "rock" && current_pc == "scissors"){
      printf("You won! One point!");
      USER_SCORE++;
    } else if (current_user == "rock" && current_pc == "paper"){
      printf("You lost! Go again.");
      PC_SCORE++;
    } else {continue;}
  }

}
//continue
void draw_pyramid(int base, int height){
  char PT = "%";
  char DL = "$";
  int BACKING_VAL;
  BACKING_VAL = base / 2;

  for(int i = 0; i < (height - (height / 4)); i++){
    continue;
  }

}
//start xd
void hangman(){
  
}

void guess_number(){
  int NUMBER;
  int CURRENT_GUESS;
  CURRENT_GUESS = 0;
  NUMBER = rand() % 100;
  while (NUMBER != CURRENT_GUESS){
    printf("Guess a number: ");
    scanf("%d", &CURRENT_GUESS);
    if (CURRENT_GUESS < NUMBER){
      printf("Guess a larger number!\n");
    } else if (CURRENT_GUESS > NUMBER){
      printf("Guess a smaller number!\n");
    } else {
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
    if(x == range - 1){
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