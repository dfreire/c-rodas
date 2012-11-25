#include <stdio.h>

int mul(int n1, int n2);
int add(int n1, int n2);

int main(int argc, char *argv[])
{
    // x = (15 + 10) * 3
    int result = mul(add(15, 10), 3);

    printf("Result: %d\n", result);

    return 0;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

int add(int n1, int n2)
{
    return n1 + n2;
}

/**
 * Note:
 * - forward declarations
 * - function signatures
 **/

