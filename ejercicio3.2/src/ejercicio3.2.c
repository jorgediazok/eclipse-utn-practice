/*
 ============================================================================
 Name        : 2.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Crear una funci�n que muestre por pantalla el n�mero flotante que recibe como par�metro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float numeroFlotante(float num);

int main(void) {

	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un n�mero: \n");
	scanf("%d", &numero);

	printf("El n�mero ingresado es: %.2f", numeroFlotante(numero));

	return EXIT_SUCCESS;
}

float numeroFlotante(float num){

	return num;
}


