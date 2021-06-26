/* 
Programa: Juego del número secreto
Objetivo: Mediante el uso de funciones, hacer un programa que simule un juego de adivinar el número secreto.
Programador: Edwin Andrade
Fecha: 11/05/2021 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define POS 20
int numeroAzar(int min, int max){
	int numero;
	srand(time(NULL));
	numero = min + rand() % (max+1 - min);
	return numero;
}
void numeroAscendetes(int datos[], int elem){
	int j,i, mayor, aux;
	for (i=0; i<=elem-2; i++){
		mayor=-9999;
		for (j=i+1; j<=elem-1; j++){
			if ((datos[j]>=datos[i]) && (datos[j]>=mayor)){
				mayor = datos[j];
				aux = datos[i];
				datos[i] = datos[j];
				datos[j] = aux;
			}
		}	
	}	
}
int main(int argc, char *argv[]) {
	
	int max, min, i;
	int intentos=0, ganador, entrada;
	int valor[POS];
	
	printf("Juego de adivinación de un número");
	
	printf("\n\n Inserte un mínimo y un máximo entre los que se encuentre el número");
	printf("\n Mínimo: ");
	scanf("%i", &min);
	printf("\n Máximo: ");
	scanf("%i", &max);
	
	for(i=1; i<=POS; i++){
	valor[i] = numeroAzar(min, max);
	}
	
	ganador = valor[10];
	
	numeroAscendetes(valor, POS);
	
	
	printf("Dentro del juego hay 20 posiciones, por lo que al introducir el número, se responderá si es mayor o menor que el número ganador");

	do{
		printf("\n Inserte un número entre %i y %i: ", min, max);
		scanf("%i", &entrada);
		
		if (entrada < ganador){
			printf("\n El número secreto es mayor al ingresado");
		}else if (entrada > ganador){
			printf("\n El número secreto es menor al ingresado");
		}
		intentos++;
		
		printf("\n Se han realizado %i intentos", intentos);
	} while(entrada != ganador);
	
	printf("\n\n Felicidades!! Ha adivinado que el numero secreto!");
	printf("\n Numero secreto de la partida: %i", ganador);
	printf("\n Numero de intentos totales: %i", intentos);
	
	return 0;
}

