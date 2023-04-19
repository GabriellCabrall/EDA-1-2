#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[9999], menor, tent, i, pos;

    scanf("%d", &tent);
    for(i = 0; i < tent; i++){
        scanf("%d", &num[i]);
    }

    menor = num[0];
    pos = 0;

    for(i = 0; i < tent; i++){
        if(num[i] < menor){
            menor = num[i];
            pos = i;
        }
    }
    printf("%d", pos);
    return 0;
}
