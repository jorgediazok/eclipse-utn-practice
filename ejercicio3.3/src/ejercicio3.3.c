/*
 ============================================================================
 Name        : 3.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Crear una funci�n que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroEntero(int num);

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado;

	printf("Ingrese un n�mero: \n");
	scanf("%d", &numeroIngresado);

	printf("El n�mero ingresado es: %d", numeroEntero(numeroIngresado));


	return EXIT_SUCCESS;
}

int numeroEntero (int num){
	return num;
}
