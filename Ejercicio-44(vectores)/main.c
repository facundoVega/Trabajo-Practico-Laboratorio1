#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funcion.h"
#define SIZE_ARRAY 20
int main(int argc, char *argv[])
{
    int c;
    int j;
    char a=0;
    int i;
    int numeros[SIZE_ARRAY];
    int positivos[SIZE_ARRAY];
    int negativos[SIZE_ARRAY];
    
    
    
  SetConsoleTitle("Ejercicio 44");
  
  for(j=0;j<SIZE_ARRAY;j++)
  {
                           positivos[j]=0;
                           negativos[j]=0;
                           numeros[j]=0;
                           
                           
  }
  for(i=0;i<SIZE_ARRAY;i++)
  {
                           do
                           {
                                  if(a)
                                       printf("Solo se deben ingresar numeros distintos de cero\nIntente nuevamente\n");
                                
                                printf("Ingrese numero\n");
                                fflush(stdin);
                                scanf("%d",&numeros[i]);
                                system("cls");
                                a=1;
                           }
                           while(numeros[i]==0);
                           a=0;
                           
                           if(numeros[i]>0)
                           {
                                          positivos[i]=numeros[i];
                                          
                           }
                           if(numeros[i]<0)
                           {
                                          negativos[i]=numeros[i];
                                          
                                          
                           }
                           
   }
  ordenar_decreciente(positivos);
  ordenar_creciente(negativos);
  printf("Vector tal como fue ingresado\n");
  
  mostrar_array(numeros);

  printf("\n\npresione cualquier tecla para continuar\n");
  getch();
  system("cls");
  
  printf("Vector de positivos:\n");
  mostrar_array(positivos);
  printf("\n\npresione cualquier tecla para continuar\n");
  getch();
  system("cls");
  
  printf("Vector de negativos:\n");
  mostrar_array(negativos);
  
  
  
  
  system("PAUSE");	
  return 0;
}
