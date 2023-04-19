#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void movex(char *str)
{

    if (*str != '\0')
    {
        if (*str != 'x')
        {
            printf("%c", *str);
            movex(str + 1);
        }
        if(*str == 'x'){
            movex(str+1);
            printf("%c", *str);
        }
    }
}

int main()
{
    char string[100];

    scanf("%s", string);
    movex(string);
    printf("\n");

    return 0;
}
