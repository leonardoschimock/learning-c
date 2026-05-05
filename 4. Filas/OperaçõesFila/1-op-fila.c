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