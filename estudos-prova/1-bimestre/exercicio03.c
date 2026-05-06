#include <stdio.h>
#include <stdbool.h>
#define TAM 5

int main(void){
    int i, aux;
    bool b = false;
    int vet[] = {18, 25, 12, 55, 33};
    printf("\nInforme um valor para buscar no vetor: ");
    scanf("%i", &aux);

    for(i = 0; i < TAM; i++){
        if(vet[i] == aux){
            b = true;
        }
    }

    if(b) {
        printf("\n\nO valor existe no vetor...");
    } else {
        printf("\n\nO valor nao existe no vetor...");
    }

    printf("\n--------------------------");
}