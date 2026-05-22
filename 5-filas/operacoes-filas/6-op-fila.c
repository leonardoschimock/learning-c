#include <stdio.h>
#define MAX 10

typedef struct {
    int dados[MAX];
    int tamanho;
} Lista;

// Inserir no final
int inserir(Lista *L, int valor) {
    if (L->tamanho >= MAX) {
        printf("Lista cheia.\n");
        return 0;
    }
    L->dados[L->tamanho++] = valor;
    return 1;
}


// Imprimir lista
void imprimir(Lista *L) {
    if (L->tamanho == 0) {
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista: ");
    for (int i = 0; i < L->tamanho; i++) {
        printf("%d ", L->dados[i]);
    }
    printf("\n");
}


// Remover um valor (busca e desloca os elementos)
int remover(Lista *L, int valor) {
    int i, encontrado = 0;
    for (i = 0; i < L->tamanho; i++) {
        if (L->dados[i] == valor) {
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Valor %d nao encontrado.\n", valor);
        return 0;
    }
    for (; i < L->tamanho - 1; i++) {
        L->dados[i] = L->dados[i + 1];
    }
    L->tamanho--;
    printf("Valor %d removido.\n", valor);
    return 1;
}

int main() {
    Lista lista;
    lista.tamanho = 0;

    inserir(&lista, 10);
    inserir(&lista, 20);
    inserir(&lista, 30);
    inserir(&lista, 40);

    imprimir(&lista);

    remover(&lista, 20);
    remover(&lista, 50);
}