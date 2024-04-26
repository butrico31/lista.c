#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
	int dado;
	struct _no *prox;
} No;

void iniciaLista(No**);
int vazia(No *);
void imprimeLista(No *);

void addListInicio(No **, int);
void addListFim(No **, int);
void addListPosition(No **, int, int);

void removeInicio(No**);
void removePosition(No**, int);
void removeItem(No**, int);
void removeFim(No**);

int tamanho(No *);

#endif
