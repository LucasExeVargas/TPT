#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 30

typedef char* tCad[TAM]; // Mantenido como un arreglo de punteros a caracteres


void cargarConj(tCad conj,int *);
void mostrarConj(tCad conj,int n);
void leeCad(char cad[],int n);
void reemplazarCad(tCad list,int n);
int main(int argc, char *argv[]) {
	tCad conjunto;
	int N;
	
	cargarConj(conjunto,&N);
	mostrarConj(conjunto, N);
	reemplazarCad(conjunto,N);
	mostrarConj(conjunto, N);
	return 0;
}

void cargarConj(tCad conj,int* n){
	char cadena[TAM];
	
	printf("Ingrese la cantidad de conjuntos que va a querer cargar: ");
	scanf("%d",n);
	
	
	for(int i=1;i<=*n;i++){
		fflush(stdin);
		//fgets(cadena,TAM,stdin);
		leeCad(cadena,TAM);
		//conj[i]=cadena;
		strcpy(conj[i],cadena);
	}
	
}
void mostrarConj(tCad conj,int n){
	for(int i=1;i<=n;i++){
		printf("El conjunto[1]= %s\n",conj[i]);
	}
}
void leeCad(char cad[],int n){
	int j=0;
	char c;
	c=getchar();
	while(c!=EOF && c!= '\n' && j < n-1){
		cad[j]=c;
		c=getchar();
		j++;
	}
	cad[j]='\0';
	while(c!=EOF && c!='\n'){
		c=getchar();
	}
}
int busqueda(tCad conj,int n,char cad[TAM]){
	int i=1,b=-1;;
	
	
	while(i<=n && b==-1){
		if(strcmp(cad,conj[i])==0){
			b=i;
		}else{
			i++;
		}
	}
	return b;
}
	
void reemplazarCad(tCad list,int n){
	int pos;
	
	char cad[TAM];
	printf("Ingrese la cadena a ser modificada: ");
	leeCad(cad,TAM);
	
	pos=busqueda(list,n,cad);
	if(pos!=0){
		printf("Ingrese el nuevo conjunto: ");
		fflush(stdin);
		leeCad(cad,TAM);
		strcpy(list[pos],cad);
	}
}
