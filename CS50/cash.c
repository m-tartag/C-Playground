#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // init vars / prompt user
    float user_input;
    int change, coins;

    do
    {
        printf("Hello, please enter the change: ");
        scanf("%f", &user_input);
    } while (user_input <= 0);

    // convert total cash to cents
    change = round(user_input * 100);

    // coin counter
    coins = 0;

    // start with largest coin
    while (change >= 25)
    {
        change -= 25;
        coins++;
    }

    while (change >= 10)
    {
        change -= 10;
        coins++;
    }

    while (change >= 5)
    {
        change -= 5;
        coins++;
    }

    while (change >= 1)
    {
        change -= 1;
        coins++;
    }

    // print the final number of coins

    printf("Total Change: %f\n", user_input);

    printf("Least Coins Possible: %d\n", coins);
}