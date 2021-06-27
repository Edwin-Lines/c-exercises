/*
Programa: Reccurrencias del alfabeto dentro de una subcadena
	Objetivo: Leer una cadena y cuenta la cantidad de veces que se enuentra cada letra del abecedario dentro de la cadena.
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
	
int main(int argc, char *argv[]) {
	char str[200];
	char ch[ABC] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'}; //27 letras de alfabeto
	char *car[27];
	int n[ABC] = {0};
	int pass=0, j;
	minusculas(str);

	printf("Insertar cadena a usar:\n");
	gets(str);

	for(j=0;j<ABC;j++){
	
	printf("\n\n\nProceso para la letra %c\n",ch[j]);
	
	car[j] = strchr(str,ch[j]);
	
	if (car[j] != NULL){
		printf("\n%s\n",car[j]);
		n[j]++;
	}
	
		
	while(pass == 0){
		car[j] = strchr(car[j]+1,ch[j]);
		if(car[j] != NULL){
			n[j]++;
			pass++;
			printf("\n%s\n",car[j]);
		} 
		pass--;
	}
	
	}
	for(j=0;j<ABC;j++){
	printf("\nEl número de veces que se encontró | %c | dentro de la cadena fue de %i veces",ch[j],  n[j]);
	}
	return 0;
}

