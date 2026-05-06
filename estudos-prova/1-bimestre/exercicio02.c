#include <stdio.h>

int main(void){
    int notas[5] = {5, 8, 9, 7, 6};
    
    int maior = notas[0];

    printf("\n\nExibindo os valores do vetor: \n");

    for (int i = 0; i < 5; i++){
        printf("Notas: %i\n", notas[i]);

        if (notas[i] > maior){
            maior = notas[i];
        }
    }

    printf("\nA maior nota eh: %i\n", maior);

    return 0;
}