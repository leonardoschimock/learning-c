#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;

    printf("Preencha a matriz:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\n");

    return 0;
}