#include <stdio.h>
#include <stdlib.h>
#define TAM 5 

int pilha[TAM];  
int topo = -1;	

void push(int valor);
void pop();
void exibirPilha();

int main() {
    push(55);
    push(12);
    push(18);
    push(11);
    push(33);
	exibirPilha();

    pop();
    pop();
    
	exibirPilha();

    return 0;
} 

void push(int valor) {
    if (topo == TAM - 1) {
        printf("\nPilha cheia!\n");
    } else {
        topo++;
        pilha[topo] = valor;
        printf("Valor %d empilhado!\n", valor);
    }
}

void pop() {
    if (topo == -1){
        printf("Pilha vazia!\n");
    } else {
        topo--;
        printf("Topo agora: %d = %d\n", topo, pilha[topo]);
    }
}

void exibirPilha() {
    if (topo == -1) {
        printf("Pilha vazia!\n");
    } else {
        printf("\nConteudo da Pilha:\n");
        for (int i = topo; i >= 0; i--){
            printf("%d\n", pilha[i]);
        }
        printf("-----\n");
    }
}