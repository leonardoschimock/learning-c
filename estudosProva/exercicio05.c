#include <stdio.h>
#include <stdbool.h>

int main(void){ //identação do C
    int i, j, aux; // declaração das variaveis  
    int vetor[] = {17, 22, 11, 33, 18, 9}; // declaração e atribuição de valores ao array
    int n = (int)(sizeof(vetor) / sizeof(vetor[0])); // n recebe o tamanho do vetor

    for(i = 0; i < n - 1; i++){  
        for(j = 0; j < n - 1 - i; j++){
            if (vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}