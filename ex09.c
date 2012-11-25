#include <stdio.h>

int main(int argc, char *argv[])
{

    int n = 10;

    printf("n:   %d\n", n);

    printf("n++: %d\n", n++);
    printf("n:   %d\n", n);
    
    printf("++n  %d\n", ++n);
    printf("n:   %d\n", n);
    
    printf("n--: %d\n", n--);
    printf("n:   %d\n", n);
    
    printf("--n  %d\n", --n);
    printf("n:   %d\n", n);

    return 0;
}

/**
 * Note:
 * - increment
 * - decrement
 **/
