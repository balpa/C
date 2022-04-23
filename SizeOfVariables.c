#include <stdio.h>

int main()
{
    int typeint;
    float typefloat;
    double typedouble;
    char typechar;

    printf("Size of int: %zu bytes\n", sizeof(typeint));
    printf("Size of float: %zu bytes\n", sizeof(typefloat));
    printf("Size of double: %zu bytes\n", sizeof(typedouble));
    printf("Size of char: %zu bytes\n", sizeof(typechar));

    return 0;
}
