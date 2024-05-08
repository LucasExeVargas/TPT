#include "TAD_TVec.h"

tSet newSet() {
	tSet conjunto;
	conjunto.size = 0; // Inicializa el tamaño del conjunto a 0
	// Inicializar el arreglo `lis`
	for (int i = 0; i < SIZE_V; i++) {
		conjunto.lis[i] = NULL;
	}
	return conjunto;
}

void eliminarPrimerUltimoCaracter(char* cadena){
	int len = strlen(cadena);
	if (len > 0){
		cadena[len - 2] = '\0';
	}
	if(cadena[0] != '\0'){
		memmove (cadena, cadena + 1, strlen(cadena));
	}
}
	
void fillSet(tSet *A, char *s) {

	int i = 0;
	tCad vectorDeConjunto;
	for (int i = 0; i < TAM; i++) {
		vectorDeConjunto[i] = strtok(i == 0 ? s : NULL, ",");
		if (vectorDeConjunto[i] == NULL)
			break;
	}
	// Dividir la cadena s en elementos separados por comas
	for (int j = 0; vectorDeConjunto[j]!=NULL; j++){
		A->lis[i] = strdup(vectorDeConjunto[j]);
		i++;
	}
	A->size = i; // Actualizar el tamaño del conjunto
}	
void printSet(tSet conjunto){
	printf("\n{");
	printf("%s",conjunto.lis[0]);
	for (int i=1 ; i<conjunto.size ; i++){
		printf(",%s",conjunto.lis[i]);
	}
	printf("}");
}
	
int card(tSet conjunto){
	return conjunto.size;
}
