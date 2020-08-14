#include <stdio.h>

int F[50];

// ______________  Memoisation  ______________________
int memoFib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }

    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = memoFib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = memoFib(n - 1);
        }
        F[n] = F[n - 2] + F[n - 1];

        return F[n];
    }
}

// ______________  ForLoop  ______________________
int forFib(int n)
{

    int i, sum = 0, t0 = 0, t1 = 1;
    if (n <= 1)
        return n;

    for (i = 2; i <= n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }

    return sum;
}

int main()
{
    int loopFib = forFib(19);
    printf("%d\n", loopFib);

    for (int i = 0; i < 49; i++)
        F[i] = -1;

    int mFib = memoFib(19);
    printf("%d", mFib);

    return 0;
}