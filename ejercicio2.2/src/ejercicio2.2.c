/*
 ============================================================================
 Name        : 2.c
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

	int numeroIngresado;
	int acumuladorPositivos;
	int acumuladorNegativos;
	int i;
	int contadorPares;
	int contadorImpares;
	int numeroMenor;
	int numeroParMayor;
	int flagMayorPares;
	int flagMenorNumero;
	int contadorNegativos;
	int productoNegativos;

	acumuladorPositivos = 0;
	acumuladorNegativos = 0;
	flagMayorPares = 0;
	flagMenorNumero = 0;
	contadorPares = 0;
	contadorImpares = 0;
	contadorNegativos = 0;


	for(i = 0; i < 10; i++){

		printf("Ingrese un número\n");
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		while(numeroIngresado == 0){
			printf("Ingrese un número distinto de 0\n");
			scanf("%d", &numeroIngresado);
		}

		//a) Cantidad de pares e impares
		if(numeroIngresado % 2 == 0){
			//c) De los pares el mayor número ingresado
			if(flagMayorPares == 0 || numeroIngresado > numeroParMayor){
				numeroParMayor = numeroIngresado;
				flagMayorPares = 1;
			}
			contadorPares++;
		}else{
			contadorImpares++;
		}

		//Menor numero
		if(flagMenorNumero == 0 || flagMenorNumero < numeroMenor){
			numeroMenor = numeroIngresado;
			flagMenorNumero = 1;
		}

		//Positivos y negativos
		if(numeroIngresado > 0){
			acumuladorPositivos = acumuladorPositivos + numeroIngresado;
		}else{
			acumuladorNegativos = acumuladorNegativos + numeroIngresado;
			contadorNegativos++;
		}

	}

	//Respuestas

	//a
	printf("La cantidad de números pares es: %d\n", contadorPares);
	printf("La cantidad de números impares es : %d\n", contadorImpares);
	//b
	printf("El menor número ingresado es: %d\n", numeroMenor);
	//c
	printf("El mayor de los números pares es: %d\n", numeroParMayor);
	//d
	printf("La suma de los números positivos es: %d\n", acumuladorPositivos);
	//e
	productoNegativos = acumuladorNegativos * contadorNegativos;
	printf("El producto de los números negativos es: %d", productoNegativos);


	return EXIT_SUCCESS;
}
