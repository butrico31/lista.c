#include "lista.h"



void iniciaLista(No **list){
	
	*list = NULL;
}

int vazia(No *list){
	
	return (list = NULL) ? 1:0;
}

int tamanho(No *list){
	
	int cont = 0;
	No *aux = list;
	
	while(aux){
		aux = aux->prox;
		cont++;
	}
	
	return cont;
}
//printa a lista

void imprimeLista(No *list){
	
	No *aux = list;
	
	if(vazia(list)){
		
		printf("A lista estah vazia!\n");
		return;
	}
	while(aux!=NULL){
		
		printf("%d", aux->dado);
		aux = aux->prox;
	}
	printf("\n");
}

void addListInicio(No **list, int elemento){
	
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->dado = elemento;
		novo->prox = *list;
		aux = *list;
		*list = novo;
		novo = aux;
	}
	else
		printf("Nao foi possivel alocar memoria\n");
}

void addListPosition(No **list, int elemento, int posicao){
	
	No *aux = *list;
	No *novo = malloc(sizeof(No));
	int cont = 0;
	
	if(novo){
	
		if(posicao == 0){
		
			addListInicio(list, elemento);
			return;
		}
		while(aux && cont < posicao-1){
			aux = aux->prox;
			cont++;
		}
		if(cont < posicao-1){
		
			printf("Impossivel alocar nessa posicao!\n");
			return;
		}
		No *aux2 = malloc(sizeof(No));
		
		aux2 = aux->prox;
		novo->dado = elemento;
		novo->prox = aux2;
		aux->prox = novo;
	}
	else
		printf("Nao foi possivel alocar memoria\n");
}

void removeInicio(No **list){
	No *aux = *list;
	
	*list = aux->prox;
	
}

void removePosition(No **list, int position){
	
	No *aux = *list;
	int cont = 0;
	
	if(position == 0){
 
		removeInicio(list);
		return;
	}
	while(aux && cont < position-1){
		
		aux = aux->prox;
		cont++;
	}
	No *aux2 = malloc(sizeof(No));
	aux2 = aux->prox->prox;
	aux->prox = aux2;
	
}

void removeFim(No **list){
	
	No *aux = *list;
	int i = 0;
	while(aux && i < tamanho(*list)-2){

		aux = aux->prox;
		i++;
	}
	aux->prox = NULL;
}

void removeItem(No **list, int elemento){
	
	No *aux = *list;
	int i = 0;
	
	while(aux->dado != elemento){
	
		i++;
		aux = aux->prox;
		if(aux->prox->dado == elemento){
			break;
		}
	}
	if(!i){
		
		removeInicio(list);
		return;
	}
	if(i == tamanho(*list)){
		removeFim(list);
		return;
	}
	
	No *aux2 = malloc(sizeof(No));
	aux2 = aux->prox->prox;
	aux->prox = aux2;
}
