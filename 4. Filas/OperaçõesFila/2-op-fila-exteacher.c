#include <stdio.h>
#define MAX 5

//definição de variáveis
int fila[MAX];
int inicio = 0;
int fim = 0;

// inserir na fila
void inserir(int valor){
    if (fim == MAX){
        printf("Fila cheia!\n");
        return;
    }
    fila[fim] = valor;
    fim++;
}

// remover da fila
void remover(){
    if (inicio == fim){
        printf("Fila vazia!\n");
        return;
    }
    printf("Removido: %d\n", fila[inicio]);
    inicio++;
}

// mostrar fila
void mostrar(){
    if (inicio == fim){
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila: ");
    for (int i = inicio; i < fim; i++){
        printf("%d ", fila[i]);
    }
    printf("\n");
}

//operação com a fila
int main(){
    inserir(10);
    inserir(20);
    inserir(30);
    mostrar();
    remover();
    mostrar();

    inserir(40);
    inserir(50);
    inserir(60); // cheia
    mostrar();
    return 0;
}