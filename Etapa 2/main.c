#include <stdio.h>

#include "TAD_TVec.h"
int main(int argc, char *argv[]){
	cad cadena; 
	fflush(stdin);
	fgets(cadena, TAM, stdin);
	tSet A = newSet();
	fillSet(&A,cadena);
	printSet(A);
	return 0;
}
