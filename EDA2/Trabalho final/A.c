#include <stdio.h>

int main()
{
    int n, m, p;
    scanf("%d %d", &n, &m);
    scanf("%d", &p);
    int x1 = 1, y1 = 1, x2 = n, y2 = m, step = 1, i;
    for (i = 1; i <= p; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 1)
            y1++;
        else if (a == 2)
            y1--;
        else if (a == 3)
            x1++;
        else if (a == 4)
            x1--;
        if (b == 1)
            y2--;
        else if (b == 2)
            y2++;
        else if (b == 3)
            x2--;
        else if (b == 4)
            x2++;
        if (x1 < 1 || x1 > n || y1 < 1 || y1 > m)
        {
            printf("PA saiu na posicao (%d,%d) no passo %d\n", x1, y1, step);
            return 0;
        }
        if (x2 < 1 || x2 > n || y2 < 1 || y2 > m)
        {
            printf("PB saiu na posicao (%d,%d) no passo %d\n", x2, y2, step);
            return 0;
        }
        if (x1 == x2 && y1 == y2)
        {
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", x1, y1, step);
            return 0;
        }
        step++;
    }
    printf("Nao se encontraram\n");
    return 0;
}