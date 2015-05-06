#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funcion.h"
#define SIZE_ARRAY 20

int main(int argc, char *argv[])
{
    
    int vector[SIZE_ARRAY];
    int i;
    int posicion;
    int aux[SIZE_ARRAY];
    int j;
       
    SetConsoleTitle("Ejercicio 41(vectores)");
    //inicializo mi vector aux en -1.
    for(j=0;j<SIZE_ARRAY;j++)
    {
                             aux[j]=-1;
                             
                             
    }
  
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
        
           posicion=validar_posicion();
           posicion--;
           if (validar_repeticion_posicion(aux,posicion))
           {
                   vector[posicion]=validar_numero();                                     
                                                        
           }
           else
           {
               printf("Indice repetido intente nuevamente\n");
               i--;
               
               
           }
           
           
       
    
                             
                             
    }
    printf("VECTOR TAL COMO FUE INGRESADO:\n");
    mostrar_array(vector);
    printf("Presione una tecla para continuar\n");
    getch();
    system("cls");
    
    printf("VECTOR ORDENADO DECRECIENTEMENTE\n");
    ordenar_decreciente(vector);
    mostrar_array(vector);
    
    system("PAUSE");	
    return 0;
}
