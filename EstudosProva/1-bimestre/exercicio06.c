#include <stdio.h>

int main(){
    int matriz[4][4];
    int i, j;
    printf("\n+---------------------------+\n");
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("\n| Informe um valor para posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\n+-------------------------------------+\n\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("| %d \t", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("+------------------------------------------+\n");
}