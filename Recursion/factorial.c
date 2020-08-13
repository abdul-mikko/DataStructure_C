#include <stdio.h>

int factorial(int f)
{

    if (f == 0)
        return 1;

    return factorial(f - 1) * f;
}

int main()
{

    int fac = factorial(5);
    printf("%d", fac);

    return 0;
}