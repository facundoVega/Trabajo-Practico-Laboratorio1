#include "funcion.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARRAY 10


int leer_valor()
{
    int valor;
    printf("Ingrese un valor numerico\n" );
    fflush(stdin);
    scanf("%d", &valor);
    
    return valor;
    
    
}
char leer_letra()
{
     char letra;
     printf("En que vector desea almacenar un valor(A/B)");
     fflush(stdin);
     scanf("%c", &letra);
     letra=tolower(letra);
     return letra;
     
     
     
     
}
void mostrar_array(int vector[])
{
     int i;
     for(i=0;i<SIZE_ARRAY;i++)
     {
           printf("%d\n", vector[i]);                   
                              
                              
     }
     
     
     
     
     
}
void leer_valor_vector(int a[])
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              printf("Ingrese valor para el vector en la posicion %d\n",i+1);
                              fflush(stdin);
                              scanf("%d", &a[i]);
                              system("cls");
                              
                              
                              
     }
     
     
     
     
}
int validar_letra(char letra)
{
     if(letra!='a' &&letra!='b')
     {
                   return 1;
          
          
          
          
          
          
     }
     else 
          return 0;
     
     
}


