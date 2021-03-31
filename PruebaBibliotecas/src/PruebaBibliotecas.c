/*
 ============================================================================
 Name        : PruebaBibliotecas.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"


int main(void) {

	setbuf(stdout, NULL);
	int num1;
	int num2;
	int resultado;

	printf("Ingrese un número: ");
	scanf("%d", &num1);

	printf("Ingrese otro número ");
	scanf("%d", &num2);

	resultado = suma(num1, num2);

	if(resultado){
		printf("La suma es: %d", resultado);
	}else{
		printf("No hay nada que sumar");
	}

	return EXIT_SUCCESS;
}



