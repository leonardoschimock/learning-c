#include <stdio.h>

int main(void){
    int valores[5] = {5, 8, 9, 7, 6};

    printf("\n\nExibindo os valores do Vetor: \n");

    for (int i = 0; i < 5; i++) {
        printf("Valores: %i\n", valores[i]);
    }

    return 0;
}