#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i, j, aux;  
    int vetor[] = {17, 22, 11, 33, 18, 9};
    int n = (int)(sizeof(vetor) / sizeof(vetor[0])); 

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