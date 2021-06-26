/* 
Programa: Acomodo y búsqueda de números dentro de un arreglo
Objetivo: Usar funciones para realizar una función sortSelection y una búsqueda de tipo sequencial dentro de un arreglo
Programador: Edwin Andrade
Fecha: 12/05/2021 */

#include <stdio.h>

void sortSelection(int valores[], int elem){
	int j,i, menor, aux;
	for (i=1; i<=elem-1; i++){
		menor = 9999;
		for (j=i+1; j<=elem; j++){
			if ((valores[j]<=valores[i]) && (valores[j]<=menor)){
				menor = valores[j];
				aux = valores[i];
				valores[i] = valores[j];
				valores[j] = aux;
			}
		}	
	}	
}
	
int busquedaSecuencial(int valor, int ne, int entrada[]){	
	int opcion=0, i=1;
	int elem;
	while (i<=ne && !opcion){
		
		if (valor == entrada[i]){
			elem = i;
			opcion=1;
		} i++; 
	}
	
	if (opcion){
		printf("\n El elemento %i se encuentra en la posición %i ",valor, elem);}
	
	else{ printf("El elemento %i no se encontró dentro del arreglo", valor);
	return 0;
	}
	
}

int main(int argc, char *argv[]) {
	int i, ne, valor;
	
	printf("====================================================\n\n");
		
	//Se insertan valores dentro del arreglo
		printf("Insertar cantidad de valores a meter dentro del arreglo: ");
		scanf("%i", &ne);

	int	entrada[ne];
		
	for( i = 1; i <= ne; i++){
		printf("\n Elemento %i: ", i);
		scanf("%i", &entrada[i]);
	}
	
	//se muestra el arreglo en pantalla ordenado
	
	sortSelection(entrada, ne);
	
	for( i = 1; i <= ne; i++){
		printf("%i  ", entrada[i]);
	}
	printf("\n\n====================================================\n");
	
	//Búsqueda binaria
	printf("\n Valor a buscar: ? ");
	scanf("%i", &valor);
	
	busquedaSecuencial(valor, ne, entrada);
	
	return 0;
	
}

