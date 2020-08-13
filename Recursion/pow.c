#include <stdio.h>

int power(int m, int n)
{

    if (n == 0)
        return 1;

    return power(m, n - 1) * m;
}

int main()
{

    int powr = power(2, 5);
    printf("%d", powr);

    return 0;
}