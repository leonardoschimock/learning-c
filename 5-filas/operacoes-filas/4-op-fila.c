#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dados;
    struct no* prox;
} No;

int main() {
    No *pNode1;
    No *pNode2;
    No *pNode3;

    pNode1 = malloc(sizeof(No));
    pNode1->dados = 10;

    pNode2 = malloc(sizeof(No));
    pNode2->dados = 20;

    pNode3 = malloc(sizeof(No));
    pNode3->dados = 30;

    pNode1->prox = pNode2;
    pNode2->prox = pNode3;
    pNode3->prox = NULL;

    No* L = pNode1;

    while (L != NULL) {
        printf("\n ==> %d", L->dados);
        L = L->prox;
    }

    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}