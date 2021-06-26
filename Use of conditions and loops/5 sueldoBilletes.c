/* 
Programa: Número de billetes dentro de un sueldo
Objetivo: Mediante el uso de funciones, calcular la cantidad de billetes que debe recibir un empleado.
Programador: Edwin Andrade
Fecha: 11/05/2021 */

#include <stdio.h>
#include <math.h>
int billetes500(float num){
	float aux;
	double decimal, entero;
	
	aux = num/500;
	decimal = modf(aux, &entero);
	printf("\n Se entregan %.1f billetes de 500", entero);
	return decimal*500;
	}
	
int billetes200(float num){
	float aux;
	double decimal, entero;
	
	aux = num/200;
	decimal = modf(aux, &entero);
	printf("\n Se entregan %.lf billetes de 200", entero);
	return decimal*200;
	}
	
int billetes100(float num){
	float aux;
	double decimal, entero;
		
	aux = num/100;
	decimal = modf(aux, &entero);
	printf("\n Se entregan %.lf billetes de 100", entero);
	return decimal*100;
	}
	
int billetes50(float num){
	float aux;
	double decimal, entero;
		
	aux = num/50;
	decimal = modf(aux, &entero);
	printf("\n Se entregan %.lf billetes de 50", entero);
	return decimal*50;
	}
	
int billetes20(float num){
	float aux;
	double decimal, entero;
		
	aux = num/20;
	decimal = modf(aux, &entero);
	printf("\n Se entregan %.lf. billetes de 20", entero);
	return decimal*20;
	}
	

int main(int argc, char *argv[]) {
	
	char nombre[40];
	float sueldo;
	int cant, i;
	
	printf("Sueldo de un grupo de empleados");
	printf("Insertar el número de empleados cuya información será leida: ");
	scanf("%i", &cant);
	getchar();
	
	for(i=1; i<=cant; i++){
	printf("\n Insertar nombre del empleado %i: ", i);
	gets(nombre);
	
	printf("\n Insertar sueldo de %s: ", nombre);
	scanf("%f", &sueldo);
	getchar();
	
	while(sueldo>=20){
	if (sueldo > 500){
		sueldo = billetes500(sueldo);
	} else
	 if (sueldo > 200){
		 sueldo = billetes200(sueldo);
	 }else
	  if (sueldo > 100){
		  sueldo = billetes100(sueldo);
	  } else 
	   if (sueldo > 50){
		   sueldo = billetes50(sueldo);
	   }
	   else{
		    sueldo = billetes20(sueldo);
	    }
	}
	
	if(sueldo>0){ 
	printf("\n Sobra un total de %5.3f pesos ", sueldo);
	}
	}
	
	return 0;
	
	
}

