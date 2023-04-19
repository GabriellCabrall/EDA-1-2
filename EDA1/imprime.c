void imprime (celula *le)
{
    celula *elem;

    for(elem = le->prox; le != NULL; elem = elem->prox){
        printf("%d -> ", elem -> dado);
    }
    printf("NULL\n");
}

int main()
{
    celula *le = malloc(sizeof(celula));
    le -> prox = NULL;
    return 0;
}
