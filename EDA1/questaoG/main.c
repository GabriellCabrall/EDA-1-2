#include <stdio.h>
#include <stdlib.h>

int main(){
    int aeroportos[100];
    int A, V, teste;
    int i, origem, destino;
    int maior;

    teste = 1;
    scanf("&d%d", &A, &V);
    //Inicializa
    while(A != 0 || V != 0){
        for(i = 0; i < A; i++){
            aeroportos[i] = 0;
        }
        //Conta a frequencia de voos dos aeroportos
        for(i =0; i < V; i++) {
            scanf("%d%d", &origem, &destino);
            aeroportos[origem-1]++;
            aeroportos[destino-1]++;
        }

        //encontra o maior elemento do vetor
        maior = aeroportos[0];
        for(i = 1; i < A; i++){
            if(aeroportos[i]>maior){
                maior = aeroportos[i];
            }
        }
        //Imprime o resultado do caso de teste
        printf("Teste %d\n", teste);
        for(i = 0; i < A; i++){
            if(aeroportos[i] == maior){
                printf("%d", i+1);
            }
        printf("\n\n");
        teste++;
        }

        scanf("&d %d", &A, &V);
    }

    return 0;
}
