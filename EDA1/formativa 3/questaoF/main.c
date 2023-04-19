#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double buscaBinaria(double *v,  int n, double x){
    int e = -1, d = n, m;
    while (e < d - 1){
        m = (e + d)/2;
        if (v[m] < x) e = m;
        else d = m;
    }
    return d;

}

int main()
{
    int C, T, x, y;
    long int totalPontos;
    double R[10000];

    scanf("%d %d", &C, &T);
    for (int i = 0; i < C; i++) scanf("%lf", &R[i]);

    totalPontos = 0;
    for (int i = 0; i < T; i++){
        scanf("%d %d", &x, &y);
        totalPontos += C - buscaBinaria (R, C, sqrt(pow(x,2)+ pow(y,2)));
    }

    printf("%ld\n", totalPontos);




    return 0;
}
