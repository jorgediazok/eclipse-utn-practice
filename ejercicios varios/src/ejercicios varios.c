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

/*int suma();
int num3 = 2; //Puedo agregar una variable global y se suma también;

//Función main inicia la ejecución del programa
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
}//Fin de la función main


int suma(int num1, int num2){
	int suma = num1 + num2 + num3;
	return suma;
}*/

//Función main inicia la ejecución del programa


//2 Función de saludo
/*void saludo(){
	printf("Hola Mundo!");
}

int main(void) {
	setbuf(stdout, NULL);

	saludo();

	return EXIT_SUCCESS;
}*/

//3 creando estructuras

/*struct perro{
		char nombre[30];
		int edad;
		float peso;
	}
perro1={"Chikorita", 10, 3.5},
perro2={"Michelle", 4, 2.1};

int main() {
	setbuf(stdout, NULL);

	printf("El peso de: %s es %.2f Kg y tiene %i años\n", perro2.nombre, perro2.peso, perro2.edad);

	return EXIT_SUCCESS;
}*/

// 4 creando estructuras con arreglos

struct perro{
		char nombre[30];
		int edad;
		float peso;
	}perros[3];


int main() {
	setbuf(stdout, NULL);

	for(int i = 0; i<3; i++){
		printf("%i Ingrese el nombre del perro\n",i+1);
		scanf("%s",perros[i].nombre);

		printf("%i Ingrese la edad del perro\n", i+1);
		scanf("%d", &perros[i].edad);

		printf("%i Ingrese el peso del perro\n", i+1);
		scanf("%f", &perros[i].peso);
	}

	for(int i=0; i<3; i++){
		printf("%i El nombre del perro es %s\n", i+1, perros[i].nombre);
		printf("%i La edad del perro es %i\n", i+1, perros[i].edad);
		printf("%i El peso del perro es %.2f\n", i+1, perros[i].peso);
	}

	return EXIT_SUCCESS;
}

