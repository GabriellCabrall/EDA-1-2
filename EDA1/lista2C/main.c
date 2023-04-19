#include <stdio.h>
#include <stdlib.h>

long int conta7(long int n)
{
    if (n < 1){
        return 0;
    }
    if (n % 10 == 7){
        return 1 + conta7(n / 10);
    }
    if (n % 10 != 7){
        return conta7(n / 10);
    }
}

int main()
{
    long int n;
    scanf("%ld", &n);
    printf("%ld\n", conta7(n));
    return 0;
}
