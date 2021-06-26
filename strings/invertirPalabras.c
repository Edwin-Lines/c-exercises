/*
Programa: Invertir palabras
Objetivo: Invierte las palabras de una cadena usando strtok
Programador: Edwin Andrade
Fecha: 10/04/2021
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char string[200];
	int i=0, n=0, j=1;
	char *array[j];
	
	printf("Programa para invertir los tokens de palabras\n\n");
	printf("Insertar la cadena al que se le invertiran los tokens\n");
	gets(string);
	
	array[i] = strtok(string," ");
	
	while(array[i]!=NULL)
	{
		array[++i] = strtok(NULL," ");
		n++;
		j++;
	}
	
	printf("\nTokens en orden normal\n");
	for(i=0;i<n;i++){
		if(array[i] != NULL){
			printf("%s \n", array[i]);
		}
	}
	
	printf("\nTokens en orden invertido\n");
	for(i=n-1;i>=0;i--){
		if(array[i] != NULL){
			printf("%s \n", array[i]);
		}
	}
	return 0;
}


