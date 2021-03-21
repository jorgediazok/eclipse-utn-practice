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

	//Ejercicio 1-2:ingresar 3 números y mostrar el mayor de los tres.


	setbuf(stdout, NULL);

		int i;
		int numeroIngresado;
		int numeroMayor;
		int flagMayor = 0;

		for (i=0; i < 3 ; i++){
			printf("Ingrese numero:\n");
			scanf("%d", &numeroIngresado);

			if(flagMayor == 0 || numeroIngresado > numeroMayor){
				numeroMayor = numeroIngresado;
				flagMayor = 1;
			}
		}

	printf("El número más grande ingresado es %d", numeroMayor);


	return EXIT_SUCCESS;
}
