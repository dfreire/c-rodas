#include <stdio.h>

int main(int argc, char *argv[])
{
    // arrays

    int array1[3];
    array1[0] = 100;
    array1[1] = 200;
    array1[2] = 300;

    int array2[] = {100, 200, 300};

    printf("array1: {%d, %d, %d}\n", array1[0], array1[1], array1[2]);
    printf("array2: {%d, %d, %d}\n", array2[0], array2[1], array2[2]);
    printf("sizeof array1: %ld\n", sizeof(array1));
    printf("sizeof array2: %ld\n", sizeof(array2));

    printf("sizeof int: %ld\n", sizeof(int));
    printf("length array1: %ld\n", sizeof(array1) / sizeof(int));

    // chars and strings
   
    char c1 = 'V';
    char c2 = 111;

    printf("c1: %c (%d)\n", c1, c1);
    printf("c2: %c (%d)\n", c2, c2);

    char s1[] = "Rodas";
    char s2[] = {'R', 'o', 'd', 'a', 's', '\0'};
    char c3   = s1[0];

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("c3: %c\n", c3);
    printf("sizeof s1: %ld\n", sizeof(s1));
    printf("sizeof s2: %ld\n", sizeof(s2));

    printf("sizeof char: %ld\n", sizeof(char));
    printf("length s1: %ld\n", sizeof(s1) / sizeof(char));

    return 0;
}

/**
 * Note:
 * - strings as arrays of chars
 * - sizeof
 * - length
 **/
