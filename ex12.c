#include <stdio.h>

int main(int argc, char *argv[])
{
    int condition = 3; // true

    while (condition)
    {
        printf("condition: %d\n", condition);
        condition--;
    }

    return 0;
}

/**
 * Note:
 * - integers as boolean values
 * - while loop
 * - infinite loop
 **/

