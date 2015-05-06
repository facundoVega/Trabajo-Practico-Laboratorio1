#include "funcion.h"
#define SIZE_ARRAY 20

void ordenar_decreciente(int pos[])
{
     int masGrande;
     int i;
     int j;
     int posicion;
     
     for(i=0;i<SIZE_ARRAY-1;i++)
     {
                                masGrande=pos[i];
                                posicion=i;
                                
                                for(j=i+1;j<SIZE_ARRAY;j++)
                                {
                                                           if(masGrande<pos[j])
                                                           {
                                                                               masGrande=pos[j];
                                                                               posicion=j;
                                                                               
                                                                               
                                                           }
                                                           
                                                           
                                }
                                
                                if(posicion!=i)
                                {
                                               pos[posicion]=pos[i];
                                               pos[i]=masGrande;
                                               
                                               
                                }
     }
     
     
}

void ordenar_creciente(int neg[])
{
     int aux;
     int i;
     int j;
     
     for(i=0;i<SIZE_ARRAY-1;i++)
     {
                              for(j=i+1;j<SIZE_ARRAY;j++)
                              {
                                                         if(neg[i]>neg[j])
                                                         {
                                                                          aux=neg[j];
                                                                          neg[j]=neg[i];
                                                                          neg[i]=aux;
                                                                          
                                                                          
                                                         }
                                                         
                                                         
                                                         
                              }
                              
                              
     }
     
     
     
     
     
     
     
}
void mostrar_array(int vector[])
{
     int i=0;
     
     while(vector[i]!=0)
     {
                              printf("%d\n", vector[i]);
                              
                              i++;       
      
                              if(i==SIZE_ARRAY)
                                      break;                
     }
     
     
     
}
