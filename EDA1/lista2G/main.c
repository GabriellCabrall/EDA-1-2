#include <stdio.h>
#include <stdlib.h>

long long int memo[81];

long long int fibonacci(int n)
{
    memo[1] = 1;
    memo[2] = 1;

    if (memo[n] != 0) return memo[n];

    else
    {
        memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return memo[n];
    }
}

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%lld\n", fibonacci(n));
//     return 0;
// }
