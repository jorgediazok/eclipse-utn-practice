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

int suma(int numero1, int numero2);

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


int suma(int numero1, int numero2){
	int retorno = 0;

	if(numero1 > 0 || numero2 > 0){
		retorno = numero1 + numero2;
	}

	return retorno;
}
