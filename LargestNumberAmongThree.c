

#include <stdio.h>

int main()
{

    int numarray[3];
    int largest;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numarray[i]);
    }

    largest = numarray[0];

    for (int i = 0; i < 3; i++)
    {
        if (numarray[i] > largest)
        {
            largest = numarray[i];
        }
    }

    printf("%d\n", largest);

    return 0;
}
