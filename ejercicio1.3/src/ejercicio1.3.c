/*
 ============================================================================
 Name        : 3.c
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

	int i;
	int numeroIngresado;
	int numeroMayor;
	int numeroMenor;
	int numeroMedio;
	int flagMayor = 0;
	int flagMenor = 0;
	int flagMedio = 0;


	for(i=0; i < 3; i++){

	printf("Ingrese un número:\n");
	scanf("%d", &numeroIngresado);

	if(flagMayor == 0 || numeroIngresado > numeroMayor){
		numeroMayor = numeroIngresado;
		flagMayor = 1;
   }


	if(flagMenor == 0 || numeroIngresado < numeroMenor){
	 numeroMenor = numeroIngresado;
		flagMenor = 1;
	}

   }

	numeroMedio = numeroIngresado;


	printf("El número mayor es %d\n", numeroMayor);
	printf("El númerno menor es %d\n", numeroMenor);
	printf("El número del medio es %d\n", numeroMedio);


	return EXIT_SUCCESS;
}
