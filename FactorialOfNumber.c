#include <stdio.h>

int main()
{

    int number;
    int count;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        count *= i;
    }

    printf("The factorial of %d is %d\n", number, count);

    return 0;
}
