#include <stdio.h>
#include <stdlib.h>

float pot(int a, int b){

     if(b==0) return 1;

     if(b>0) return a*pot(a,b-1);

     else return (1/(a*pot(a,-b-1)));

}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0&&b<=0)printf("indefinido");
    else printf("%f\n",pot(a,b));
    return 0;
}

