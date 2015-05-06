#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"


//Busca el mayor numero  en un vector de enteros  y  almacena su valor en un array y su posicion original en otro vector.
//si ese numero mayor se repite lo almacena  tambien, junto con su posicion original en los mismos vectores antes mencionados.
void buscar_mayor(int num[], int mayor[], int pos[])
{
         int i;
         int max=0;
         int posicion;
         int j;
         
         for(i=0;i<size_array;i++)
         {
                                  
                                  if(num[i]>max)
                                  {
                                                  max=num[i];
                                                  posicion=i;
                                                  
                                                  
                                                  
                                                  
                                  }

                                  
                                                                             
        }
        mayor[0]=max;
        pos[0]=posicion;
        
        for(j=1;j<size_array;j++)
        {
                                 if(num[j]==max && j!=posicion)
                                 {
                                                  mayor[j]=num[j];
                                                  pos[j]=j;
                                                  
                                                  
                                 }
                                 
                                 
        }
                                                             
                                  
                                  
                                  
                                  
                                  
         
         
     
     
}


//Muestra los elementos de  un array en pantalla por printf.

void mostrar_array(int num[])
{
     int i;
     
     for(i=0;i<size_array;i++)
     {
                              printf("%d\n", num[i]);
                              
     }
     
     
     
}

//lee un vector de enteros de forma secuencial.
void leer_vector(int num[])
{
     int i;
      for(i=0;i<size_array;i++)
    {
                    printf("Ingrese un numero para el vector\n");
                    fflush(stdin);
                    scanf("%d", &num[i]);
                    system("cls");
                    
                    
    
  
  
    }
     
}
