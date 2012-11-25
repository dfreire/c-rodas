#include <stdio.h>

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("This program needs at least one argument\n");
        return 1;
    }
    else
    {
        char c = argv[1][0];

        switch (c)
        {
            case 'a':
                printf("Recognized an 'a'.\n");
                break;
            case 'b':
                printf("Recognized an 'b'.\n");
                break;
            case 'c':
            case 'C':
                printf("Recognized an 'c'.\n");
                break;
            default:
                printf("Not recognized.\n");
        }

        return 0;
    }

}

/**
 * Note:
 * - switch statement
 * - meaning of break, potential problems
 **/


