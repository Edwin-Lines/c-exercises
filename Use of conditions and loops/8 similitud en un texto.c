#include <stdio.h>
#include <string.h>
#include <ctype.h> 

 int similitudCadenas(char cad1[], char cad2[]){
	 int long1 = strlen(cad1);
	 int long2 = strlen(cad2);
	 char c = cad2[0];
	 int i, j;
	 int diferente=0, similitudes=0;
	for(i=0; i<= long1;i++){
		if(cad1[i] == c){
			for(j=0;j<=long2 ;j++){
				if (cad1[i+j] != cad2[j]){
				diferente++;
				}
			if (diferente==0){
				similitudes++;
				}
			}
		}
	}
 return similitudes;
 }

void minisculas(char cadena[]){
	int long1 = strlen(cadena);
	int	i;
	for(i=0; i<=long1;i++){
		cadena[i] = tolower(cadena[i]);
	}
}
	 
int main(int argc, char *argv[]) {
	
	char cadena1[200];
	char cadena2[25];
	int cantSimil;
	
	printf("\n Insertar el texto o párrafo a utilizar \n");
	gets(cadena1);
	
	minisculas(cadena1);
	
	printf("\n Palabra o caracter a buscar dentro del texto anterior: ? \n");
	gets(cadena2);
	
	minisculas(cadena2);
	
	cantSimil = similitudCadenas(cadena1, cadena2);
	printf("\n La cantidad de similitudes encontradas dentro del texto es de %i", cantSimil);
	
	return 0;
}

