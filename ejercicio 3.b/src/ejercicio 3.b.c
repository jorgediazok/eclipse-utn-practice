/*
 ============================================================================
 Name        : b.c
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

	int numeroIngresado1;
	int numeroIngresado2;

	printf("Ingrese un número: \n");
	scanf("%d", &numeroIngresado1);

	printf("Ingrese otro número: \n");
	scanf("%d", &numeroIngresado2);

	while((numeroIngresado1 < 10 && numeroIngresado2 <10)   || (numeroIngresado1 > 100 && numeroIngresado2 > 100)){
		printf("Por favor ingrese un número mayor a 10 y menor a 100");
		scanf("%d", &numeroIngresado1);
		scanf("%d", &numeroIngresado2);
	}


	printf("Sus numeros ingresados son %d %d", numeroIngresado1, numeroIngresado2);


	return EXIT_SUCCESS;
}
