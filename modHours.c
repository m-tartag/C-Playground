#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Empty Vars

    int time = 0;
    int hoursPassed = 0;
    int hoursCounter = 0;
    int daysCounter = 0;

    int newTime = 0;

    // Get User Input

    printf("Enter time: ");
    scanf("%i", &time);
    printf("Enter hours passed: ");
    scanf("%i", &hoursPassed);

    // LOGIC??????

    while (hoursPassed != 0)
    {
        if (hoursPassed >= 24)
        {
            daysCounter += 1;
            hoursPassed -= 24;
        }
        else
        {
            hoursCounter += hoursPassed;
            hoursPassed -= hoursPassed;
        }
    }
    printf("===== Totals =====\n");
    printf("Days Passed: %i\n", daysCounter);
    printf("Hours Passed: %i\n", hoursCounter);

    while (hoursCounter > 12)
    {
        if (hoursCounter + time > 12)
        {
            newTime -= 12;
        }
        else
        {
            newTime = hoursCounter + time;
        }
    }

    printf("New time: %i\n", newTime);
}
