/* 
Programa: Reccurrencias dentro de una subcadena
Objetivo: Leer una cadena y cuenta la cantidad de veces que se enuentra un caracter dentro de la cadena.
Programador: Edwin Andrade
Fecha: 11/06/2021 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> 
void minisculas(char cadena[]){
	int long1 = strlen(cadena);
	int	i;
	for(i=0; i<=long1;i++){
		cadena[i] = tolower(cadena[i]);
	}
}
	

int main(int argc, char *argv[]) {
	char str[200];
	char ch;
	char *car;
	int n=0;
	int pass=0;
	minisculas(str);
	
	printf("Insertar cadena a usar:\n");
	gets(str);
	printf("Insertar el caracter a buscar dentro de la cadena: ");
	scanf("%c", &ch); 
	
	car = strchr(str,ch);
	if (car != NULL){
		printf("\n%s\n",car);
		n++;
	}
	
	while(pass == 0){
	car = strchr(car+1,ch);
	if(car != NULL){
		n++;
		pass++;
		printf("\n%s\n",car);
	} 
	pass--;
}
	
	printf("\nEl número de veces que se encontró | %c | dentro de la cadena fue de %i veces",ch,  n);
	return 0;
}


