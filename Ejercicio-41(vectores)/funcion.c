#include "funcion.h"
#include <stdlib.h>
#include <stdio.h>
#define SIZE_ARRAY 20


int validar_posicion()
{
    int posicion;
    char a =0;
    do
    {
         if(a)
              printf("ERROR,la posicion ingresada debe estar en el rango entre 1 %d\n",SIZE_ARRAY);
              
         printf("Ingrese posicion donde quiere almacenar el valor\n");
         fflush(stdin);
         scanf("%d", &posicion);
         system("cls");
         
         a=1;     
         
    } 
    while(posicion>SIZE_ARRAY||posicion<1);
    return posicion; 
     
     
}
int validar_repeticion_posicion(int aux[],int pos)
{
    
    int i;
    int j;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(pos==aux[i])
                             {
                                            break;
                                            
                                            
                             }
                             
                             
    }
    if(i==SIZE_ARRAY)
    {
                     for(j=0;j<SIZE_ARRAY;j++)
                     {
                                              if(aux[j]==-1)
                                              {
                                                            aux[j]=pos;
                                                            break;
                                                            
                                              }
                                              
                                              
                     }
                     
                     return 1;
                     
    }
    else
    {
        return 0;
        
        
    }
    
    
    
}
int validar_numero()
{
    char a=0;
    int numero;
    do
    {
         if (a)
            printf("Error, el numero ingresado debe de ser positivo\nIntente nuevamente\n\n");
            
            
         printf("Ingrese un numero positivo\n");
         fflush(stdin);
         scanf("%d", &numero);
         system("cls");
         
         a=1;
    }     
    while(numero<0);
    return numero;
            
}
void mostrar_array(int vector[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             printf("%d\n",vector[i]);
                             
                             
                             
                             
                             
    }
    
    
    
    
}
void ordenar_decreciente(int vec[])
{
     int posicion;
     int masGrande;
     int i;
     int j;
     
     for(i=0;i<SIZE_ARRAY-1;i++)
     {
                                masGrande=vec[i];
                                posicion=i;
                                
                                for(j=i+1;j<SIZE_ARRAY;j++)
                                {
                                                           if(vec[j]>vec[i])
                                                           {
                                                                            masGrande=vec[j];
                                                                            posicion=j;
                                                                            
                                                                            
                                                           }
                                                           
                                                           
                                                           
                                }
                                if(posicion!=i)
                                {
                                               vec[posicion]=vec[i];
                                               vec[i]=masGrande;
                                               
                                }
                                
     }
     
     
     
     
}
