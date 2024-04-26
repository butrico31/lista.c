#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>


typedef struct _no{
	int dado;
	struct _no *prox;
} No;

No* head = NULL;
No* corrente = NULL;

void iniciaLista(No**);
int vazia(No *);
void imprimeLista(No *);

void addListInicio(No **, int);
void addList(No **, int);

void removeInicio(No**);
void removeFim(No**);

#endif
