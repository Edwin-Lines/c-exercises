/*
Programa: Contar las palabras de una cadena
Objetivo: Cuenta las palabras de una cadena mediante arreglos y usando strtok
Programador: Edwin Andrade
Fecha: 10/06/2021
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char string[200];
	int i=0, n=0, j=1;
	char *array[j];
	
	printf("Programa para contar palabras\n\n");
	printf("Insertar la cadena al que se le contarán las palabras\n");
	gets(string);
	
	array[i] = strtok(string," ");
	
	while(array[i]!=NULL)
	{
		array[++i] = strtok(NULL," ");
		n++;
		j++;
	}
	
	printf("\nHay %i palabras\n", n);
	for(i=0;i<n;i++){
		if(array[i] != NULL){
		printf("%s \n", array[i]);
		}
	}
	return 0;
}

