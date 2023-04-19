#include <stdio.h>

int main() {
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    int pa_x = 1, pa_y = 1, pb_x = n, pb_y = m;
    int i, j;
    for (i = 1; i <= p; i++) {
        int dir_pa, dir_pb;
        scanf("%d %d", &dir_pa, &dir_pb);

        switch (dir_pa) {
            case 1:
                pa_y++;
                break;
            case 2:
                pa_y--;
                break;
            case 3:
                pa_x++;
                break;
            case 4:
                pa_x--;
                break;
        }

        switch (dir_pb) {
            case 1:
                pb_y++;
                break;
            case 2:
                pb_y--;
                break;
            case 3:
                pb_x++;
                break;
            case 4:
                pb_x--;
                break;
        }

        // verifica se professor PA saiu do CP
        if (pa_x < 1 || pa_x > n || pa_y < 1 || pa_y > m) {
            printf("PA saiu na posicao (%d, %d) no passo %d\n", pa_x, pa_y, i);
            return 0;
        }

        // verifica se professor PB saiu do CP
        if (pb_x < 1 || pb_x > n || pb_y < 1 || pb_y > m) {
            printf("PB saiu na posicao (%d, %d) no passo %d\n", pb_x, pb_y, i);
            return 0;
        }

        // verifica se professores se encontraram
        if (pa_x == pb_x && pa_y == pb_y) {
            printf("encontraram-se na posicao (%d, %d) no passo %d\n", pa_x, pa_y, i);
            return 0;
        }
    }

    printf("Nao se encontraram\n");
    return 0;
}
