#include <stdio.h>

int sumNaturalNumber(int n)
{
    if (n > 0)
    {
        return sumNaturalNumber(n - 1) + n;
    }
    return 0;
}

int main()
{

    int x = 10, sum;
    sum = sumNaturalNumber(x);
    printf("%d\n", sum);
    return 0;
}