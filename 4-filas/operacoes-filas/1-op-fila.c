#include <stdio.h>
#define MAX 20

//estrutura da fila
typedef struct {
    int dados[MAX];
    int fim;
} Fila;

//Inicializa a fila
void iniciar(Fila *f) {
    f -> fim = -1;
}

//verificar se está vazia
int vazia(Fila *f) {
    return f -> fim == -1;
}

//verifica se está cheia
int cheia(Fila *f) {
    return f -> fim == MAX - 1;
}

//insere no final [0]
void inserir(Fila *f, int valor) {
    if (cheia(f)) {
        printf("Fila Cheia!\n");
        return;
    }
    f -> fim++;
    f -> dados[f -> fim] = valor;
    printf("Inseriu: %d\n", valor);
}

void mostrar(Fila *f) {
    if (vazia(f)) {
        printf("Fila Vazia!\n");
        return;
    }
    printf("Fila: ");
    for (int i = 0; i <= f -> fim; i++){
        printf("%d", f -> dados[i]);
    }
    printf("\n");
}

int main() {
    Fila fila;
    iniciar(&fila);
}