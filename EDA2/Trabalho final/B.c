#include <stdio.h>
#include <stdlib.h>

typedef struct Item
{
    int value, id, next;
} Item;

typedef struct Node
{
    Item data;
    struct Node *next;
} Node;

typedef struct Head
{
    Node *begin;
} Head;

// Cria uma lista vazia apontada por `h`
int criar_lista(Head *h)
{
    h->begin = NULL;
    return 1;
}

// Insere um novo elemento `e` na lista apontada por `h` (no começo da lista)
int inserir(Head *h, Item e)
{
    Node *novo_no = malloc(sizeof(Node));
    if (novo_no == NULL)
        return 0;
    novo_no->data = e;
    novo_no->next = h->begin;
    h->begin = novo_no;
    return 1;
}

// Imprime o primeiro elemento da lista apontada por `h` e remove-o da lista
void remover(Head *h)
{
    printf("%d\n", h->begin->data.value);
    h->begin = h->begin->next;
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    Item itens[n];

    Head lista;
    criar_lista(&lista);

    // Lê os elementos da entrada e insere os elementos com next = -1 na lista
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &itens[i].id, &itens[i].value, &itens[i].next);
        if (itens[i].next == -1)
            inserir(&lista, itens[i]);
    }

    // Insere na lista todos os elementos cujo `next` é o `id` do primeiro elemento da lista
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (itens[j].next == lista.begin->data.id)
                inserir(&lista, itens[j]);
        }
    }

    // Imprime e remove todos os elementos da lista
    for (int i = 0; i < n; i++)
        remover(&lista);

    return 0;
}
