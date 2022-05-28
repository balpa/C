#include <stdio.h>
#include <stdlib.h>

int main(){


    int number;
    int total;

    printf("Enter a number: ");
    scanf("%d",&number);

    if (number < 0){
        printf("Number must be above 0");
        exit(0);
    }
    else{
    for (int x = 1; x <= number; x++){
        total *= x;
    }
    }
    printf("Factorial of a %d is, %d", number, total);

    return 0;

}
