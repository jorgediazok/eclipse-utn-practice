/*
 ============================================================================
 Name        : 1.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Crear una funci�n que permita determinar si un n�mero es par o no.
 La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int esNumeroPar(int num);

int main(void) {

	setbuf(stdout, NULL);

	int num;
	int esPar;

	printf("Ingrese un n�mero. Si devuelve 1 es par, si devuelve 0 es impar: \n");
	scanf("%d", &num);

	esPar = esNumeroPar(num);

	printf("El n�mero es: %d \n", esPar);

	return EXIT_SUCCESS;
}


int esNumeroPar(int num){
	if(num % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}

