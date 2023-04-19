#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imp(char *str){

    if(*str!='\0'){
      imp(str+1);
      printf("%c",*str);
    }

}

int main()
{
    char str[500];

    scanf("%s",str);
    imp(str);
    printf("\n");

    return 0;
}
