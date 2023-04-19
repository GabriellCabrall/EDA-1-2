#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocaXporY(char *str){

    if(*str!='\0'){
        if(*str=='x'){
            printf("y");
            trocaXporY(str+1);
        }
        else{
            printf("%c",*str);
            trocaXporY(str+1);
        }
    }
}


int main(){

    char str[80];

    scanf("%s",str);
    trocaXporY(str);
    printf("\n");
    return 0;
}
