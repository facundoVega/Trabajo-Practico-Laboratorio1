#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funcion.h"
#define SIZE_ARRAY 10

int main(int argc, char *argv[])
{
    int j;
    int i;
    int vectorUno[SIZE_ARRAY];
    int vectorDos[SIZE_ARRAY];
    int vectorMenor[SIZE_ARRAY];
    char letra;
    char a =0;
    
    
    SetConsoleTitle("Ejercicio 40(vectores)");
    
    printf("Ingreso de datos para el vector \"A\"\n\n");
    leer_valor_vector(vectorUno);
    system("cls");
    
    printf("Ingreso de datos para el vector \"B\"\n\n\n");
    
    leer_valor_vector(vectorDos);
    system("cls");
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(vectorUno[i]==vectorDos[i])
                             {
                                                           vectorMenor[i]=vectorDos[i];
                                                           
                                                           
                                                           
                             }
                             if(vectorUno[i]<vectorDos[i])
                             {
                                                          vectorMenor[i]=vectorUno[i];
                                                          
                                                          
                                                          
                             }
                             else
                                 
                                                          vectorMenor[i]=vectorDos[i];
                             
                             
    }
    
    printf("VECTOR A:     VECTOR B:     VECTOR C:\n");
    
    for(j=0;j<SIZE_ARRAY;j++)
    {
                             printf("%d\t%10d\t%10d\n",vectorUno[j],vectorDos[j],vectorMenor[j]);
                             
                             
                             
                             
    }
    


  
  system("PAUSE");	
  return 0;
}
