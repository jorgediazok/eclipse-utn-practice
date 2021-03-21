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

	int numero1;
	int numero2;
	int numero3;
	int numeroMedio;

    printf("Ingrese un número \n");
	scanf("%d",&numero1);

	printf("Ingrese un segundo número \n");
	scanf("%d",&numero2);

	printf("Ingrese un tercer número \n");
	scanf("%d",&numero3);

	     if(numero1 == numero2 || numero1 == numero3 || numero2 == numero3){
	         	 printf("no existe numero del medio \n");
	          } else{

	              if((numero1>numero2 && numero1<numero3) || (numero1<numero2 && numero1>numero3)){
	         		 numeroMedio=numero1;
	         	 }

	         	 if((numero2<numero1 && numero2>numero3) || (numero2>numero1 && numero2<numero3)){
	         	     numeroMedio=numero2;
	         	 }

	         	 if((numero3<numero1 && numero3>numero2) || (numero3>numero1 && numero3<numero2)){
	         	     numeroMedio=numero3;
	         	 }

	          }


	     printf("El número del medio es %d\n", numeroMedio);


	return EXIT_SUCCESS;
}
