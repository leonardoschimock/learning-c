#include <stdio.h>

int main() {
    int brasileirao[] = {83, 2020, 80, 2009, 92, 82, 2025, 87, 2019};
    int tamanhoArray = 9;
    int i, j, aux;


    for (i = 0; i < tamanhoArray - 1; i++) {
        for (j = 0; j < tamanhoArray - 1 - i; j++) {
            if (brasileirao[j] < brasileirao[j + 1]) {
                aux = brasileirao[j];
                brasileirao[j] = brasileirao[j + 1];
                brasileirao[j + 1] = aux;
            }
        }
    }


    printf("O Clube de Regatas do Flamengo foi campeao braisileiro nos seguintes anos: \n");
    for (i = 0; i < tamanhoArray; i++) {
        printf("%d ", brasileirao[i]);
    }

    return 0;

}