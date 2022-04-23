#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two numbers consecutively: ");
    scanf("%f %f", &a, &b);
    printf("Multiply of two number is %.2lf\n", a * b);
    return 0;
}
