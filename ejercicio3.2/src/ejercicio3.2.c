/*
 ============================================================================
 Name        : 2.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Crear una función que muestre por pantalla el número flotante que recibe como parámetro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float numeroFlotante(float num);

int main(void) {

	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un número: \n");
	scanf("%d", &numero);

	printf("El número ingresado es: %.2f", numeroFlotante(numero));

	return EXIT_SUCCESS;
}

float numeroFlotante(float num){

	return num;
}


