#include <stdio.h>

int main(){

int number;
int total;

printf("Enter a number: ");
scanf("%d",&number);

for (int x = 0; x < number; x++){
    total += x;
    }
printf("Total is: %d",total);


return 0;
    }
