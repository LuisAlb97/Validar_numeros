//01-03-2020
//Luis Albero Hernandez Cozatl
//Se mostraran diiferentes programas en el cual se sumaran los numeros dados y se les sacara la media, se mostrara el numero mayor y menor
//asi tambien se contara los numeros pares e impares y se mostrara la cantidad obtenida.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void suma(void);
void impares(void);
void leernumero(void);
void fibonacci(void);


int main()
{	system("cls");
	int op;
	do{
	printf("************* Menu ******************\n\n");
	printf("1.-Suma, Media, Mayor Y Menor\n");
	printf("2.-Numero impares, Media De Pares e Impares\n");
	printf("3.-Leer Y Validar Un Numero Dentro De Un Rango\n");
	printf("4.-Serie De Fibonacci con ciclos\n");
	printf("5.-Salir\n\n");
	printf("Selecciona una opcion:\n");
	scanf("%d",&op);
	
	   switch(op)
	   {
		case 1: suma();
				break;
		case 2: impares();
				break;
		case 3: leernumero();
				break;
		case 4: fibonacci();
				break;
	   }
    }while(op!=5);
    system("pause");
}

