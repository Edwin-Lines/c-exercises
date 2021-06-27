/*
Programa: Ordenamiento Alfabético de una lista de palabras
Objetivo: Leer una lista de palabras y ordenalas alfabéticamente
Programador: Edwin Andrade
Fecha: 12/06/2021 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#define ABC 27

void minusculas(char cadena[]){
	int long1 = strlen(cadena);
	int	i;
	for(i=0; i<=long1;i++){
		cadena[i] = tolower(cadena[i]);
	}
}

int valorAlfabetico(char palabra[]){
	int i=0, valor, pass=0;
	char ch[ABC][1] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","ñ","o","p","q","r","s","t","u","v","w","x","y","z"}; //27 letras de alfabeto
	
	while(i<ABC && pass ==0){
	if( strncmp(palabra, ch[i], 1) == 0 ){
		valor = i;
		pass++;
		}
	i++;
	}
	return valor+1;
}

int main(int argc, char *argv[]) {
	int cant;
	int i,j;
	int menor;
	char aux[50];
	
	printf("Programa de ordenamiento de cadenas alfabéticamente\n\n");
	printf("Inserte la cantidad de palabras que se ordenar: ");
	scanf("%i", &cant);
	getchar();
	
	char palabras[cant][50];
	
	for(i=0;i<cant;i++){
		printf("Inserte la palabra %i: ",i+1);
		gets(palabras[i]);
	}
	
	printf("\nLas palabras a ordenar son las siguientes (antes de ordenarlas):\n");
	for(i=0;i<cant;i++){
		printf("Palabra %i: %s\n",i+1,palabras[i]);
		minusculas(palabras[i]);
	}
	
	for(i=0;i<cant-1;i++){
		menor = 9999;
		for(j=i+1;j<cant;j++){
			if( valorAlfabetico(palabras[j]) <= valorAlfabetico(palabras[i]) && valorAlfabetico(palabras[j]) <= menor ){
				menor = valorAlfabetico(palabras[j]);
				strcpy(aux, palabras[i]);
				strcpy(palabras[i], palabras[j]);
				strcpy(palabras[j], aux);
			}	
		}
	}
	
	printf("\nPalabras despues de su ordenamiento:\n");
	for(i=0;i<cant;i++){
		palabras[i][0] = toupper(palabras[i][0]);
		printf("Palabra %i: %s\n",i+1,palabras[i]);
	}
	
	
	return 0;
}

