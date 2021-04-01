/*
 ============================================================================
 Name        : EjercicioMenu-A.c
 Author      : jorgedv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 A- Hacer el menú de un programa con las siguientes opciones:
  1. Loguearse, 2. Comprar, 3. Ver mis compras, 4. Vender, 5. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	setbuf(stdout, NULL);

	int opcionElegida;
	int flagLogueo = 0;
	int flagCompra = 0;
	int salir = 0;

	do{
		printf("\n 1) Loguearse \n");
		printf("\n 2) Comprar \n");
		printf("\n 3) Ver mis Compras \n");
		printf("\n 4) Vender \n");
		printf("\n 5) Salir \n");
		scanf("%d", &opcionElegida);

		switch(opcionElegida){

		case 1:
			if(flagLogueo == 0){
				printf("Logueado");
				flagLogueo = 1;
			}else{
				printf("Ya se encuentra logueado.");
			}
			break;

		case 2:
			if(flagLogueo == 0){
				printf("Debe loguearse primero.");
			}else{
				printf("Ha relizado una compra");
				flagCompra = 1;
			}
			break;

		case 3:
			if(flagLogueo == 0){
				printf("Debe loguearse primero.");
			}else{
				if(flagCompra == 1){
					printf("Compras realizadas");
				}else{
					printf("No tiene ninguna compra realizada.");
				}
			}
			break;

		case 4:
			if(flagLogueo == 0){
				printf("Debe loguearse primero.");
       			}else{
       				printf("Ahora puede vender.");
       			}
			break;

		case 5:
			salir = 1;
			printf("Ha salido del programa.");
			break;

		default:
			printf("Por favor elija una opción válida");
			break;
		}

		//Fin del bucle

	} while(opcionElegida != 5);

	return EXIT_SUCCESS;
}


