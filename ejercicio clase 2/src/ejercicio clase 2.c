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

	//Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.

//	int numero1;
//	int numero2;
//	int resultado;
//
//	printf("Ingrese numero:\n");
//	scanf("%d", &numero1);
//
//	printf("Ingrese otro numero:\n");
//	scanf("%d", &numero2);
//
//	resultado = numero1 + numero2;
//	printf("El resultado es %d", resultado);


	//Ejercicio 1-2:ingresar 3 números y mostrar el mayor de los tres.

//	int numero1;
//	int numero2;
//	int numero3;
//	int numeroMayor;
//
//	printf("Ingrese numero:\n");
//	scanf("%d", &numero1);
//
//	printf("Ingrese otro numero:\n");
//	scanf("%d", &numero2);
//
//	printf("Ingrese otro numero:\n");
//	scanf("%d", &numero3);
//
//	if(numero1 > numero2 && numero1 > )


	//Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la
	//aplicación con distintos valores.

	int contador;
	int numero;
	int acumulador = 0;
	float promedio;

	for(contador = 0; contador < 5; contador++){
		printf("Ingrese un número: \n");
		scanf("%d", &numero);
		acumulador += numero;
	}

	promedio = (float) acumulador / contador;

	printf("el promedio es %.2f", promedio);

	return EXIT_SUCCESS;

}

