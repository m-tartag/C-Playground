#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    int YEAR = 0;
    printf("ENTER YEAR: ");
    scanf("%i", &YEAR);
    printf("%i\n", YEAR);
    if (YEAR % 400 == 0)
    {
        printf("Leap Year: Confirmed");
    }
    else if (YEAR % 100 == 0)
    {
        printf("Not Leap Year");
    }
    else if (YEAR % 4 == 0)
    {
        printf("Leap Year: Confirmed");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}