#include "TAD_TCad.h"
#include <stdio.h>

void leeCad(char cad[],int tam){
	int j=0;
	char c;
	c=getchar();
	while(c!=EOF && c!= '\n' && j < tam-1){
		cad[j]=c;
		c=getchar();
		j++;
	}
	cad[j]='\0';
	while(c!=EOF && c!='\n'){
		c=getchar();
	}
}
