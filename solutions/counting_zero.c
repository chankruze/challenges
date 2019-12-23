// Partially correct, timeout for big numbers

#include <stdio.h>

int calcZeros(long long num);

int main()
{
    long long t, n;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        int zeros_in_2n = calcZeros(2 * n);
        int zeros_in_n = calcZeros(n);
        printf("%d\n", zeros_in_2n - (2 * zeros_in_n));
    }
    
    return 0;
}

int calcZeros(long long num)
{
    int count = 0, i = 5;

    while (num / i >= 1)
    {
        count += num / i;
        i *= 5;
    }
    return count;
}