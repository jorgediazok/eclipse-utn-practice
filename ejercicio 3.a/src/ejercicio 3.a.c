/*
 ============================================================================
 Name        : a.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define DESCUENTO 5

float realizarDescuento(int numero1, int numero2);

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	float valorConDescuento;


	printf("Ingrese un número: \n");
	scanf("%d", &numeroIngresado);

	while(numeroIngresado < 10 || numeroIngresado > 100){
		printf("Error. Ingrese un número mayor a 10 y menor a 100.");
		scanf("%d", &numeroIngresado);
	}

	valorConDescuento = numeroIngresado - realizarDescuento(numeroIngresado, DESCUENTO);

	printf("El valor con descuento es %.2f", valorConDescuento);

	return EXIT_SUCCESS;
}

float realizarDescuento(int numero1, int numero2){
	float resultado;

	resultado = (float)numero1 * numero2 / 100;

	return resultado;
};
