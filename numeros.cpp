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
	
	void suma(void)
	{ 
	  system ("cls");
     int num=0, suma=0, i=0, mayor=0, menor=0;
     char esc;
    
    printf("***************** Numeros de n cantidad ******************\n\n");
    
     do
     {
           printf("Ingrese un numero entero: ");
           scanf("%d",&num);
           suma += num;
          
            if(num > mayor)
            {
                mayor=num; //mayor obtiene el valor actual de num
                menor=num; 
            }
             else if(num<=menor)
             {
                 menor = num; //menor obtiene el valor actual y menor de num
             }
          
            printf("\n\nIngrese \"ESC\" para salir o Preione \"Enter\" Para Continuar.\n");
            esc=getch();
            printf("*****************************************\n ");
         
          i++;
      }while( esc != 27 );
     
     
       printf("La Suma de los numeros: %d\n", suma);
       printf("La Media de los numeros: %.2f\n", (float)suma/i);
       printf("El Valor mayor: %d\n", mayor);
       printf("El Valor menor: %d\n\n", menor);
   
	system("pause");
	}
	

