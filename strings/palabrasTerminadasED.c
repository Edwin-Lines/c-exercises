/*
Programa: Palabras que terminan con ed
Objetivo: Leer una lista de palabras e imprime las que terminen con ed
Programador: Edwin Andrade
Fecha: 14/06/2021 */

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
	int parImpar (int longitud){
		int tipo; //0 si es par, 1 si es impar
		if (longitud % 2 == 0){
			tipo = 0;
		} else {
			tipo = 1;
		}
		return tipo;
	}
		
		void inversionPalabra(char cadena[]){
			int j = strlen(cadena)-1, w = strlen(cadena);
			int i = 0, tipo, pass=0; 
			char aux[2];
			
			tipo = parImpar(w);
			if (tipo == 0){
				w/=2;
				
				while(pass ==0 ){
					
					aux[1] = cadena[i];
					cadena[i] = cadena[j];
					cadena[j] = aux[1];
					i++;
					j--;
					if(i>=w && j<w){
						pass++;
					}
				}
			}else{
				w=(w+1)/2;
				while(pass ==0 ){
					
					aux[1] = cadena[i];
					cadena[i] = cadena[j];
					cadena[j] = aux[1];
					i++;
					j--;
					if(i>=w && j<w){
						pass++;
					}
				}
			}
		}
			
			int main(int argc, char *argv[]) {
				int cant, i,n=0;
				char condicion[2] = "de";
				
				printf("Programa de impresión de palabras que terminen con ed\n\n");
				printf("Número de palabras a insertar?:	");
				scanf("%i", &cant);
				
				char palabra[cant][100];
				char aceptadas[cant][100];
				char inverso[cant][100];
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
					strcpy(inverso[i], palabra[i]);
					inversionPalabra(inverso[i]);
					//printf("\nPalabra %i invertida: %s",i+1, inverso[i]);
					if( strncmp(inverso[i], condicion, 2) == 0 ){
						strcpy(aceptadas[i],palabra[i]);
						n++;
					}
				}
				
				
				printf("\nPalabra/Cadena que cumplen con la condición de terminar con |ed|:\n");
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
			
			
