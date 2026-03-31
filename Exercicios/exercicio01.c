#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50}; 
    int valor, i, encontrado = 0;

    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &valor);

    for(i = 0; i < 5; i++) {
        if(vetor[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado) {
        printf("O valor %d existe no vetor.\n", valor);
    } else {
        printf("O valor %d NAO existe no vetor.\n", valor);
    }

    return 0;
}