#include "List.c"

int main(){
	
	No *lista;
	
	iniciaLista(&lista);
	
	addListInicio(&lista, 1);
	imprimeLista(lista);
	
	addListInicio(&lista, 2);
	addListInicio(&lista, 5);
	imprimeLista(lista);
	
	addList(&lista, 8);
	addList(&lista, 17);
	addList(&lista, 41);
	addList(&lista, 12);
	
	imprimeLista(lista);
	
	removeInicio(&lista);
	removeInicio(&lista);
	
	removeFim(&lista);
	imprimeLista(lista);
	
	return 0;
}
