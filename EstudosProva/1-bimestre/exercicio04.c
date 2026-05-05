#include <stdio.h>
#include <stdbool.h>

int main (void){
    int i, j, aux, n = 5;
    int vetor[n];

    for(i = 0; i < n; i++){
        printf("\nInforme um valor: ");
        scanf("%i", &vetor[i]);
    }

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for(i = 0; i < n; i++){
        printf("%i", vetor[i]);
    }

    printf("\n");
    return 0;
}