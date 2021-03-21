/*
 ============================================================================
 Name        : 3.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numeroCliente;
	char estadoCivil;
	int edad;
	int temperaturaCorporal;
	char sexo;
	int precioPorPasajero = 600;



	printf("Ingrese número de cliente:\n");
	scanf("%d", &numeroCliente);
	while(numeroCliente < 1 || isNan(numeroCliente)){
		printf("Ingrese un número valido");
	}



	return EXIT_SUCCESS;
}
