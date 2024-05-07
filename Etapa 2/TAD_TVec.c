#include "TAD_TVec.h"
#include <string.h>
#include <stdio.h>

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
	
	
void fillSet(tSet *A, char *s){
	tCad vectorDeConjunto;
	
	fgets(s, SIZE_V, stdin);
	for(int i = 0 ; i < SIZE_V ; i++){
		vectorDeConjunto[i] = strtok(i == 0 ? s : NULL, ",");
		if(vectorDeConjunto[i] != NULL){
			A->size++;
			strcpy(A->lis[A->size] , vectorDeConjunto[i]);
		}else break;
	}
	
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
