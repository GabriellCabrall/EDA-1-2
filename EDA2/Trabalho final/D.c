#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dado;
    struct Node *esq, *dir;
} Node;

void pos_ordem(Node *raiz) {
    Node *pilha[1000];
    int topo = -1;
    Node *anterior = NULL;

    while (raiz != NULL || topo != -1) {
        if (raiz != NULL) {
            pilha[++topo] = raiz;
            raiz = raiz->esq;
        } else {
            Node *no = pilha[topo];

            if (no->dir != NULL && anterior != no->dir) {
                raiz = no->dir;
            } else {
                printf("%d ", no->dado);
                anterior = no;
                topo--;
            }
        }
    }
}

Node* criar_no(int dado) {
    Node* no = (Node*) malloc(sizeof(Node));
    no->dado = dado;
    no->esq = NULL;
    no->dir = NULL;
    return no;
}

int main() {
    Node *raiz = criar_no(1);
    raiz->esq = criar_no(2);
    raiz->dir = criar_no(3);
    raiz->esq->esq = criar_no(4);
    raiz->esq->dir = criar_no(5);
    raiz->dir->esq = criar_no(6);
    raiz->dir->dir = criar_no(7);

    printf("Percurso pos-ordem: ");
    pos_ordem(raiz);
    printf("\n");

    return 0;
}
