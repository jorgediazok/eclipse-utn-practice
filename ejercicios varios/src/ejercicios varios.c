/*
 ============================================================================
 Name        : ejercicios.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma();
int main(void) {
	setbuf(stdout, NULL);
	//Testeando una función de suma

	int num1;
	int num2;

	printf("Ingresa el primer valor: \n");
	scanf("%i", &num1);

	printf("Ingresa el segundo valor: \n");
	scanf("%i", &num2);

	printf("El resultado es: %i\n", suma(num1,num2));

	return EXIT_SUCCESS;
}


int suma(int num1, int num2){
	int suma = num1 + num2;
	return suma;
}
