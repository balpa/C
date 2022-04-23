#include <stdio.h>

int main()
{

    int num1, num2;
    int tmp;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printf("Numbers before: %d, %d \n", num1, num2);

    tmp = num1;
    num1 = num2;
    num2 = tmp;

    printf("Numbers after: %d, %d \n", num1, num2);

    return 0;
}
