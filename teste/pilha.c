
#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar(Pilha *pilha) {
    pilha->topo = NULL;
}

void empilhar(Pilha *pilha, double valor) {
    Item *novoItem = (Item *)malloc(sizeof(Item));
    if (novoItem == NULL) {
        printf("Falha na aloca��o de mem�ria\n");
        exit(EXIT_FAILURE);
    }
    novoItem->dado = valor;
    novoItem->proximo = pilha->topo;
    pilha->topo = novoItem;
}

double desempilhar(Pilha *pilha) {
    if (pilha->topo != NULL) {
        Item *temp = pilha->topo;
        double valor = temp->dado;
        pilha->topo = temp->proximo;
        free(temp);
        return valor;
    } else {
        printf("pilha vazia\n");
        exit(EXIT_FAILURE);
    }
}

