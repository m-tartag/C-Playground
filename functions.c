#include <stdio.h>
#include <cs50.h>
#include <string.h>

void spellName(string name)
{
    for (int letter = 0; letter < strlen(name); letter++)
    {
        printf("%c\n", name[letter]);
    }
}

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("How old are you? ");
    printf("Hello %s!\n", name);
    spellName(name);
    printf("%lu\n", strlen(name));

    if (age < 18)
    {
        printf("You are not legal!\n");
        return 0;
    }
    else if (age < 35)
    {
        printf("You are a milennial snowflake!\n");
        return 0;
    }
    else if (age < 65)
    {
        printf("BOOMER\n");
        return 0;
    }
    else if (age >= 65)
    {
        printf("Old AF\n");
        return 0;
    }
}