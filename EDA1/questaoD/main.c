#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, conta;

    scanf("%d", &num);
    if(num <= 10){
        conta = 7;
    } else if(num <= 30){
        conta = 7 + ((num - 10)*1);
    } else if(num <= 100){
        conta = 27 + ((num - 30)*2);
    } else if(num >= 101){
        conta = 167 +((num - 100)*5);
    }

    printf("%d", conta);

    return 0;
}
