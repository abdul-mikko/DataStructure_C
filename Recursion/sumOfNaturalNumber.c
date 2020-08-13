#include <stdio.h>

int sumNaturalNumber(int n)
{
    if (n == 0)
        return 0;

    return sumNaturalNumber(n - 1) + n;
}

int factorial(int f)
{

    if (f == 0)
        return 1;

    return factorial(f - 1) * f;
}

int main()
{

    int sum = sumNaturalNumber(10);
    printf("%d\n", sum);

    int fac = factorial(5);
    printf("%d", fac);

    return 0;
}