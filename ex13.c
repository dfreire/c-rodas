#include <stdio.h>

int main(int argc, char *argv[])
{
    int value = 100;

    if (value < 100)
    {
        printf("Value is less than 100.\n");
    }
    else if (value > 100)
    {
        printf("Value is greater than 100.\n");
    }
    else
    {
        printf("Value is not less than 100, and is not greater than 100, so it must me 100.\n");
    }

    if (value == 100)
    {
        printf("Value is 100.\n");
    }

    if (value != 200)
    {
        printf("Value is not 200.\n");
    }

    return 0;
}

/**
 * Note:
 * - if statement
 * - comparisons
 * - one liners need no braces
 **/


