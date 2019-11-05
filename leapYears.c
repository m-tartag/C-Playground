#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    int YEAR = 0;
    printf("Enter Year: ");
    scanf("%i", &YEAR);
    printf("%i\n", YEAR);

    if (YEAR % 400 == 0 || (YEAR % 100 != 0 && YEAR % 4 == 0))
    {
        printf("Leap Year: Confirmed\n");
    }
    else
    {
        printf("Not Leap\n");
    }
}