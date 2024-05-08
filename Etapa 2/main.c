#include <stdio.h>
#include <stdlib.h>
#include "TAD_TVec.h"
int main(int argc, char *argv[]){
	tElem cadena = malloc(TAM * sizeof(char));; 
	fflush(stdin);
	fgets(cadena, TAM, stdin);
	fflush(stdin);
	//printf("%s", cadena);
	tSet A = newSet();
	fillSet(&A,cadena);
	printSet(A);
	return 0;
}
