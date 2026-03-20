#include <stdio.h>

int main (void) {
    int i, j, aux;
    int vetor[ ] = {17, 22, 11, 33, 18, 9};
    int pesquisa = 0;

    // n recebe o tamanho do vetor, neste caso 6
    int n = (int)(sizeof (vetor) / sizeof (vetor[ 0 ]));

    printf ("Digite um valor: ");
    scanf ("%d", &aux);

    for ( i = 0; i < n; i++) {
        if (vetor[i] == aux)
        {
            pesquisa = 1;
            break;
        }
    }

    if (pesquisa) {
        printf ("O numero %d pertence ao vetor", aux);
    } else {
        printf ("O numero %d nao pertence ao vetor", aux);
    }

    return 0;
}