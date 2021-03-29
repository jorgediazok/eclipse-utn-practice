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

int sumarDosNumeros(int numero1, int numero2);
int restarDosNumeros(int numero1, int numero2);

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado1;
	int numeroIngresado2;
	int suma;
	int resta;

	printf("Ingrese un número: \n");
	scanf("%d", &numeroIngresado1);

	printf("Ingrese otro número: \n");
	scanf("%d", &numeroIngresado2);

	while((numeroIngresado1 < 10 || numeroIngresado2 <10)   || (numeroIngresado1 > 100 || numeroIngresado2 > 100)){
				printf("Ambos números deben ser mayores a 10 y menores a 100. Pruebe de nuevo. \n");
				scanf("%d", &numeroIngresado1);
				scanf("%d", &numeroIngresado2);
			}


	suma = sumarDosNumeros(numeroIngresado1, numeroIngresado2);
	printf("La suma de los números es %d\n" , suma);

	resta = restarDosNumeros(numeroIngresado1, numeroIngresado2);
	printf("La resta de los números es %d\n", resta);


	return EXIT_SUCCESS;
}


int sumarDosNumeros(int numero1, int numero2){
		int s;

		s = numero1 + numero2;

		return s;
}

int restarDosNumeros(int numero1, int numero2){
		int r;

		r = numero1 - numero2;

		return r;
}


