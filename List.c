#include "lista.h"

void iniciaLista(No **list){
	
	*list = NULL;
}

int vazia(No *list){
	
	return (list = NULL) ? 1:0;
}

//printa a lista

void imprimeLista(No *list){
	
	No *aux = list;
	
	if(vazia(list)){
		
		printf("Lista vazia!\n");
		return;
	}
	while(aux!=NULL){
		
		printf("%d\n", aux->dado);
		aux = aux->prox;
	}
	
}

void addListInicio(No **list, int elemento){
	
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo->dado = elemento;
		novo->prox = *list;
		*list = novo;
	}
	else{
		printf("Erro ao alocar memoria!");
	}
	
}

void addList(No **list, int elemento){
	
	No *novo = malloc(sizeof(No));
	No *aux;
	
	if(novo){
		
		novo->dado = elemento;
		novo->prox = NULL;
		
		if(*list == NULL)
			*list = novo;
		else{
			
			aux = *list;
			
			while(aux->prox)
				aux = aux->prox;
			aux->prox = novo;
		}	
	}
	else
		printf("Erro ao alocar memoria!");
}
