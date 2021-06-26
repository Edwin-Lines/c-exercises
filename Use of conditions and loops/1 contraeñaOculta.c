/* 
Programa: Simulaci�n de lectura de una contrase�a de un usuario
Objetivo: Usar funciones para realizar una simulaci�n de la lectura de una contrase�a
Programador: Edwin Andrade
Fecha: 11/05/2021 */

#include <stdio.h>
#include <string.h>

int verificacion(char resp[]){

char contrase[40];
int i, existe=0, error=1;

do{
	printf("\n Contrase�a: ");
	gets(contrase);
	
	if (strcmp(contrase, resp) == 0){
		existe=1;
	} else{
		
		printf("\n La contrase�a no coincide");
		printf("\n Intentos realizados: %i | 3 \n", error);
		error++;
	}
	i++;
} while (existe==0 && error<=3);
return existe;
}

void ocultar (char password[]){
	int i;
	int lim = strlen(password);
	for(i=1;i<=lim;i++){
	printf("*");
		}
	}

int main(int argc, char *argv[]) {
	
	char usr[40];
	char pwd[12];
	int verificado=0;

	//Datos default que existen
	printf("Insertar usuario y contrase�a v�lidos para el sistema");
	
		printf("\n Usuario: ");
		gets(usr);
		printf("\n Contrase�a: ");
		gets(pwd);
		
		printf("\n\n Datos validos dentro del sistema");
		printf("\n Usuario: %s", usr);
		printf("\n Contrase�a: ");
		ocultar(pwd);

	
	printf("\n\n --------Iniciando sistema--------");
	printf("\n ");
	printf("\n Usuario: %s", usr);
	verificado = verificacion(pwd);
	
	if(verificado>0){
		printf ("---- Bienvenido %s ----", usr); 
	} else {
		printf("Acceso bloqueado");
	}
	
	return 0;
}
