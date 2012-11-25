#include <stdio.h>

int main(int argc, char *argv[])
{
    char name1[] = "Rodas";
    char *name2  = "Rodas";

    printf("name1: %s\n", name1);
    printf("name2: %s\n", name2);

    int numbers[3][2] = {
        {10, 11},
        {21, 22},
        {31, 32}
    };

    printf("sizeof numbers: %ld\n", sizeof(numbers));

    char *names[] = {
        "Rodrigo", 
        "Rui", 
        "Reduto", 
        "Renca"
    };

    printf("sizeof names: %ld\n", sizeof(names));

    return 0;
}

/**
 * Note:
 * - strings as pointers
 * - multidimensional arrays
 **/
