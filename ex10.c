#include <stdio.h>

int main(int argc, char *argv[])
{

    int numbers[3] = { 100, 200, 300 };

    int i;
    for (i=0; i < 3; i++)
    {
        printf("%d\n", numbers[i]);
    }

    int matrix[3][2] = {
        {10, 20},
        {11, 21},
        {12, 22},
    };

    int j;
    for (i=0; i < 3; i++)
    {
        for (j=0; j < 2; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}

/**
 * Note:
 * - the for loop
 **/
