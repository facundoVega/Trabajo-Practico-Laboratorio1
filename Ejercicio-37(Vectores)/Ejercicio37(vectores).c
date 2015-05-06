#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"


int main(int argc, char *argv[])
{
    
    int num[20];
    int mayor[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int posicion[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    char c;
    
    SetConsoleTitle("Ejercicio 37 (vectores)");
    
    
    
    leer_vector(num);
   
    buscar_mayor(num,mayor,posicion);
    
    printf("MAYOR NUMERO\t POSICION EN EL VECTOR: \n    %d\t                %d\n", mayor[0], posicion[0]);
    
    for(c=1;c<size_array;c++)
    {
                             if(posicion[c]!=0)
                             {
                                   printf("\t\t        %d\n", posicion[c]);            
                             }
                             
                             
    }
    
    
    
    system("PAUSE");
    system("cls");
    
    printf("VECTOR COMPLETO:\n ");
    mostrar_array(num);
    
  system("PAUSE");	
  
  
  return 0;
}
