/*
 ============================================================================
 Name        : ejercicio.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //Esto es por windows sino no anda

	//Ejercicio 2-1: Ingresar 5 n�meros enteros calcular y mostrar el promedio de los n�meros. Probar la
	//aplicaci�n con distintos valores.

	int i;
	int numeroIngresado;
	int acumulador = 0;
	float promedio;


	for(i = 0; i < 5; i++){

		while(numeroIngresado == 0){
						printf("Ingrese un n�mero distinto de 0\n");
						scanf("%d", &numeroIngresado);
					}

		printf("Ingrese un n�mero: \n");
		scanf("%d", &numeroIngresado);
		acumulador += numeroIngresado;
	}

	promedio = (float) acumulador / i;

	printf("el promedio es %.2f", promedio);

	return EXIT_SUCCESS;

}

