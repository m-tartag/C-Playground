#include <stdio.h>

int main(void)
{
    double one;
    double two;
    printf("Addition!\n");
    printf("=========\n");
    printf("Enter first number: ");
    scanf("%lf", &one);
    printf("Enter second number: ");
    scanf("%lf", &two);
    printf("=========\n");
    printf("Answer: %f\n", one + two);

    return 0;
}