/*
Programa: Palabras que inician con B
Objetivo: Leer una lista de palabras e imprime las que inicien con B
Programador: Edwin Andrade
Fecha: 13/06/2021 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void minusculas(char cadena[]){
	int long1 = strlen(cadena);
	int	i;
	for(i=0; i<=long1;i++){
		cadena[i] = tolower(cadena[i]);
	}
}

int main(int argc, char *argv[]) {
	int cant, i,n=0;
	char condicion[] = "b";
	
	printf("Programa de impresión de palabras que inicien con b\n\n");
	printf("Número de palabras a insertar?:	");
	scanf("%i", &cant);
	
	char palabra[cant][100];
	char aceptadas[cant][100];
	getchar();
	
	printf("Inserte serie de palabras (cadenas):\n\n");
	for(i=0;i<cant;i++){
		printf("Palabra/Cadena %i:  ", i+1);
		strcpy(aceptadas[i],"nada");
		gets(palabra[i]);
	}
	
	printf("\nPalabras introducidas: \n");
	for(i=0;i<cant;i++){
		printf("Palabra/Cadena %i: %s\n", i+1, palabra[i]);
		minusculas(palabra[i]);
	}
	
	for(i=0;i<cant;i++){
	if( strncmp(palabra[i], condicion, 1) == 0 ){
		strcpy(aceptadas[i],palabra[i]);
		n++;
		}
	}
	
	
	printf("\nPalabra/Cadena que cumplen con la condición de terminar con |b|:\n");
	if(n==0){
		printf("No hay cadena alguna que cumpla con la condición");
	} else{
	for(i=0;i<cant;i++){
		if( strcmp(aceptadas[i],"nada") !=0 ){
		aceptadas[i][0] = toupper(aceptadas[i][0]);
		printf("Palabra/Cadena %i: %s\n", i+1, aceptadas[i]);
			}
		}
	}
	return 0;
}

