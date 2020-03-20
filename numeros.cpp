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
	
	void impares(void)
{
	
    	system ("cls");
        int i, j=0, k=0, num, par=0, impar=0, sump=0, sumi=0, b=0;
  
          srand(time(NULL));
		  printf ("***************** Numeros Aleatorios ****************\n\n");
  	      for(i=0; b==0 ; i++) //si b es 1 se sale
           {
      	       num = 10+rand()%(60-10+1);
      	         if(num %2 == 0)
      	          {
                  	printf("\npar:%d ", num);
      		         par = num;
      		         sump+=par;//para sacar la media
      		          j++;//para sacar la media
		          }
                      else
                       {  
        	             printf("\nimpar:%d ", num); //imprime solo los impares
        	             impar = num;
      		             sumi+=impar; // sacar la media
      		             k++; //sacar la media
	                    }
	                if(k>=15 || i>=24)
	                 { 
	                 b=1; //cualquiera de los 2 casos, si uno de los 2 se cumple cambia el valor
					 }
					  else
					  {
					  	b=0;
					  }
              }


     
         printf("\n\nNumeros=%d", i);
         printf("\nNumeros Pares=%d", j);
         printf("\nNumeros Impares=%d", k);
         printf("\n\nLa media de los pares es: %.4f", (float)sump/j);
         printf("\nLa media de los impares es: %.4f\n\n", (float)sumi/k);
        system("pause");
}

void leernumero(void)
{
       	system ("cls");   
     	int inf=0, sup, num=0, b=0;
    	char esc,c;
    	printf("***************** Validar numeros **************\n\n");
		printf("Ingrese el rango inferior:  ");
	 	scanf("%d",&inf);
		printf("\nIngrese el rango superior:  ");
	 	scanf("%d",&sup);

  if((inf!=c) || (sup!=c))
  {
	 do
	 {
	 	printf("\n\n--------------------------");
	     printf("\nIngrese cualquier numero (entero): ");
	      fflush(stdin);
	 	  scanf("%d", &num);
	 	 
	 	  
	 	  if(num<=sup && num >= inf)
	 	  {
	 	  	b=0; //no cambia b si el numero esta dentro del rango
		   } 
		    else
		    {		 
	         printf("\n\n\"Valor fuera del rango.\"");
			}
			
		printf("\n\nTecla \"ESC\" para salir o \"Enter\" para continuar.");
		esc = getch();
	 	  
	 }while(b!=1 && esc != 27);
        }
         else
         {
         	printf("A ocurrido un ERROR, intentelo de nuevo.");
		 }

  system("pause");
}



