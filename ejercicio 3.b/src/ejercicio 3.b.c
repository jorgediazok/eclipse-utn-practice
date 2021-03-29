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

int operacion(int numeroIngresado1, int numeroIngresado2);

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado1;
	int numeroIngresado2;
	int resultadoSuma;

	printf("Ingrese un número: \n");
	scanf("%d", &numeroIngresado1);

	printf("Ingrese otro número: \n");
	scanf("%d", &numeroIngresado2);

	while((numeroIngresado1 < 10 || numeroIngresado2 <10)   || (numeroIngresado1 > 100 || numeroIngresado2 > 100)){
		printf("Ambos números deben ser mayores a 10 y menores a 100");
		scanf("%d", &numeroIngresado1);
		scanf("%d", &numeroIngresado2);
	}

	resultadoSuma = numeroIngresado1 + numeroIngresado2;

	printf("La suma de los números es %d", resultadoSuma);


	//valorConDescuento = numeroIngresado - realizarDescuento(numeroIngresado, DESCUENTO);

	//	printf("Sus numeros ingresados son %d y %d", numeroIngresado1, numeroIngresado2);


	return EXIT_SUCCESS;
}


int operacion(int numero1, int numero2){
	int suma;
	int resta;

	suma = numero1 + numero2;
	resta = numero1 - numero2;

	return suma && resta;
}

