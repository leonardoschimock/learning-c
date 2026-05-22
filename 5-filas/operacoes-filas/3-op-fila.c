#include <stdio.h>
#include <stdlib.h>

// Estrutura base do nó
struct No {
    int nData;
    struct No *prox;
};

// Função para imprimir a Lista
void imprimirLista(struct No *L) {
    printf("\nImprimindo a Lista:\n");
    if (L) {
        while (L != NULL) {
            printf(" %d ->", L->nData);
            L = L->prox;
        }
        printf(" NULL\n");
    } else {
        printf("Lista Vazia.\n");
    }
}

// Função para remover um elemento por valor
void removerElemento(struct No **head, int valor) {
    struct No *atual = *head;
    struct No *anterior = NULL;

    while (atual != NULL) {
        if (atual->nData == valor) {
            if (anterior == NULL) {
                // Removendo o primeiro nó
                *head = atual->prox;
            } else {
                anterior->prox = atual->prox;
            }
            free(atual);
            printf("\nElemento %d removido.\n", valor);
            return;
        }
        anterior = atual;
        atual = atual->prox;    
	}

    printf("\nElemento %d não encontrado na lista.\n", valor);
}

int main(void) {
    struct No *pNode1 = NULL;
    struct No *pNode2 = NULL;
    struct No *pNode3 = NULL;
    struct No *pNode4 = NULL;

    // Alocar espaço para a struct
    pNode1 = (struct No*) malloc(sizeof(struct No));
    pNode1->nData = 10;

    pNode2 = (struct No*) malloc(sizeof(struct No));
    pNode2->nData = 20;

    pNode3 = (struct No*) malloc(sizeof(struct No));
    pNode3->nData = 30;

    pNode4 = (struct No*) malloc(sizeof(struct No));
    pNode4->nData = 40;

    // Conectando os nós
    pNode1->prox = pNode2;
    pNode2->prox = pNode3;
    pNode3->prox = pNode4;
    pNode4->prox = NULL;
    
    // Imprimir lista antes da remoção
    imprimirLista(pNode1);
    
    // Remover o valor 40
    removerElemento(&pNode1, 30);
    
    // Imprimir lista após a remoção
    imprimirLista(pNode1);
    return 0;
}