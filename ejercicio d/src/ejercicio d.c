/*
 ============================================================================
 Name        : ejercicio.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//d-Operadores Logicos
//Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:
//Solicitar un número al usuario
//Informar si el mismo es par o impar.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int a;
	int b;
	a = 1;
	b = 0;

	printf("Ingrese un número:\n");
	scanf("%d", &numero);

	if(numero % 2 == 0){
	    printf("%d", a);
	}else{
		printf("%d", b);
	}

	return EXIT_SUCCESS;
}
