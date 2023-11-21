
#ifndef PILHA_H
#define PILHA_H

typedef struct Item {
    double dado;
    struct Item *proximo;
} Item;

typedef struct {
    Item *topo;
} Pilha;

void inicializar(Pilha *pilha);
void empilhar(Pilha *pilha, double valor);
double desempilhar(Pilha *pilha);

#endif  // PILHA_H


