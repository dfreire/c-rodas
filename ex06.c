#include <stdio.h>

int main(int argc, char *argv[])
{
    // integer numbers

    short n1 =  10;
    int   n2 = -1000000;
    long  n3 =  1000000000L;
    unsigned int n4 = 1000000000;

    printf("n1: %d\n",  n1);
    printf("n2: %d\n",  n2);
    printf("n3: %ld\n", n3);
    printf("n4: %u\n",  n4);

    // floating point numbers

    float  n5 = 9.123;
    float  n6 = 15.1f;
    double n7 = 1227710.052271;
    double n8 = n7 * n6 * n5;

    printf("n5: %f\n", n5);
    printf("n6: %f\n", n6);
    printf("n7: %f\n", n7);
    printf("n8: %e\n", n8);

    return 0;
}

/**
 * Note:
 * - several kinds of numbers
 * - http://en.wikipedia.org/wiki/Integer_(computer_science)
 **/
