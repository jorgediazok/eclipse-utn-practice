/*
 ============================================================================
 Name        : hello_world.c
 Author      : Jorge
 Version     : 1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

//%d: int
//%f: float
//%c: char

int main(void) {

	//Hacer un programa que pida dos números y los sume, reste y divida

	setbuf(stdout, NULL); //Esto es por windows sino no anda

	int numero1;
	int numero2;
	int suma;

	printf("Ingrese numero:\n");
	scanf("%d", &numero1);
	printf("Ingrese otro numero:\n");
	scanf("%d", &numero2);
	suma = numero1 + numero2;
	printf("La suma es %d", suma);

	return EXIT_SUCCESS;
}
