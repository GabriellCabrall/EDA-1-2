#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cinema[20][25];
    int i, j, F, L, num;
    char letra;

    // Todos os lugares vazios
    for(i = 0; i < 20; i++){
        for(j = 0; j < 25; j++){
            cinema[i][j] = 0;
        }
    }
    scanf("%d%d", &F, &L);
    while((scanf("%c%d", &letra, &num)) != EOF){
        cinema[letra-65][num-1] = 1;
    }

    printf(" ");
    for(i = 1; i <= L; i++){
        printf(" %02d", 1);
    }
    for(i = F - 1; i >= 0; i--){
        for(j = 0; j < L; j++){
            if(cinema[i][j] == 0){
                printf(" --");
            }else{
                printf(" XX");
            }
        printf("\n");
        }
    }
    return 0;
}
