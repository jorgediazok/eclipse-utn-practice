/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		setbuf(stdout, NULL);

	    int sueldo;
	    int sueldoConAumento;


	    printf("Ingrese su sueldo:\n");
	    scanf("%d", &sueldo);

		sueldoConAumento = sueldo + (sueldo * 0.1);

	    printf("Su sueldo con aumento es %d", sueldoConAumento);

	    return 0;

}
