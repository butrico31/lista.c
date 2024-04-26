#include "List.c"

int main(){
	
	No *lista;
	
	iniciaLista(&lista);
	
	addListInicio(&lista, 1);
	imprimeLista(lista);
	
	addListInicio(&lista, 2);
	addListInicio(&lista, 5);
	imprimeLista(lista);
	
	addListPosition(&lista, 3, 1);
	imprimeLista(lista);
	
	removeInicio(&lista);
	imprimeLista(lista);
	
	removePosition(&lista, 1);
	imprimeLista(lista);
	
	removeFim(&lista);
	imprimeLista(lista);
	addListInicio(&lista, 1);
	addListInicio(&lista, 4);
	addListInicio(&lista, 3);
	addListInicio(&lista, 2);
	imprimeLista(lista);
	
	removeItem(&lista, 2);
	imprimeLista(lista);
	removeItem(&lista, 1);
	imprimeLista(lista);
	return 0;
}
