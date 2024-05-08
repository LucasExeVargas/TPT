#include "TAD_TCad.h"

void leecad(int tam, cad cad){
	int j = 0, m;
	fflush(stdin);
	while(j<tam-1 && (m=getchar())!= EOF && m != '\n'){
		cad[j] = m;
		j++;
	}
	cad[j] = '\0';
	if(m!= EOF && m != '\n')
		while((m=getchar()) != EOF && m != '\n');
}
	
