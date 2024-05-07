#include <stdio.h>
#include "TAD_TCad.h"
#define SIZE_V 100

typedef char* tCad[SIZE_V];

typedef char* tElem;

typedef tElem tVec[SIZE_V];

typedef struct {
	tVec lis;
	int size;
}tSet;
tSet newSet(); //crea un conjunto vacío
void fillSet(tSet *A, char *s); //llena el vector con la cadena s.
//Considerar el caso conjunto vacío, es decir s=“{}”
void printSet(tSet); //muestra el conjunto
tSet U(tSet A, tSet B); //A ? B
tSet I(tSet A, tSet B); //A ? B
tSet D(tSet A, tSet B); //A \ B
int card(tSet A); //|A|
int in(tSet A, tElem e); // ¿e ? A?
int include(tSet A, tSet B); // A ? B
int includeE(tSet A, tSet B); // A ? B
void eraseSet(tSet *A); //elimina un conjunto