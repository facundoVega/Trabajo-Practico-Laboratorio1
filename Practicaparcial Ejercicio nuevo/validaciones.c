#include "funciones.h"
#include "validaciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pedir_entero(char mensaje[])
{
    long int auxInt;
    
    printf("Ingrese %s\n", mensaje);
    fflush(stdin);
    scanf("%d", &auxInt);
    system("cls");
    
    return auxInt;
    
    
    
}

int validar_entero(char mensaje[],int max,int min)
{
    char a=0;
    long int aux;
    
    do
    {
         if(a)
              printf("Error,El numero ingresado no esta dentro del rango entre %d y %d\n para :%s\n",min,max,mensaje);
              
         aux=pedir_entero(mensaje);
         a=1;
         
    }
    while(aux>max||aux<min);
    
    return aux;
    
    
    
    
}
int validar_repeticion_entero(int num,int aux[])
{
    int i;
    int j;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(num==aux[i])
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
                                                            aux[j]=num;
                                                            return 1;
                                                            break;
                                                            
                                              }
                                              
                                              
                                              
                     }
    }                    
                     
    else
    {
        return 0;
        
        
        
    }
    
}

int pedir_y_validar_entero(char mensaje[],int max,int min,int aux[])
{
    char a=0;
    long int numero;
    
    while(a==0)
    {
               numero=validar_entero("codigo",1000,1);
               
               if(validar_repeticion_entero(numero,aux))
               {
                                                        a++;
                                                        
                                                        
               }
               else
               {
                   printf("%s repetido ingrese nuevamente\n", mensaje);
                   
                   
               }
               
               
               
               
    }
    return numero;
    
    
    
    
}
void pedir_cadena(char mensaje[],char vector[])
{
     
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     scanf("%s",vector);
     system("cls");
     
     
     
     
}
void pedir_y_validar_cadena(char mensaje[],char vector[],int max)
{
     char a=0;
     char aux[50000];
     
     do
     {
          if(a)
          {     
                printf("Se excedio el maximo de caracteres a ingresar \nIntente nuevamente\n");
               
          }
          pedir_cadena(mensaje,aux);
          a=1;
          
          
          
     }
     while(strlen(aux)>max||strlen(aux)<1);
     
     strcpy(vector,aux);
     
     
}

void pedir_flotante(float vector[],int pos, char mensaje[])
{
      
      
      printf("Ingrese %s \n",mensaje);
      fflush(stdin);
      scanf("%f",&vector[pos]);
      system("cls");
      
      
      
      
      
}
void mensaje_no_disponible()
{
     printf("No se ingresaron mercaderias por lo tanto est opcion no esta disponible\n");
     system("PAUSE");
     system("cls");
     
     
}
void calcular_y_mostrar_mayor_importe(float importe[],char descripcion[][51],int codigo[],int cantidad[])
{
     float mayorImporte=0;
     int i;
     int j;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(importe[i]>mayorImporte)
                              {
                                                         mayorImporte=importe[i];
                                                         
                                                         
                              }
                              
                              
                              
     }
     printf("\tMAYOR IMPORTE:%.2f\n\n\n\n", mayorImporte);  
     printf("\tPRODUCTOS DE MAYOR IMPORTE:\n");
     printf("codigo:  descripcion:  cantidad:\n");
     
     for(j=0;j<SIZE_ARRAY;j++)
     {
                              if(importe[j]==mayorImporte&&codigo[j]!=0)
                              {
                                                          printf("%d   %10s   %d \n", codigo[j],descripcion[j],cantidad[j]);
                                                          
                                                          
                                                          
                              }
                             
                              
                              
                              
     }   
     printf("\n\n\n\n");
     
     system("PAUSE");
     system("cls");
     
}
float sumar_floats(float numeros[],int codigo[])
{
      int i;
      float suma=0;
      
      for(i=0;i<SIZE_ARRAY;i++)
      {
                      if(codigo!=0)
                      {
                                   suma=suma+numeros[i];
                                   
                                   
                                   
                      }         
                               
                               
                               
      }
      
      
      return suma;
      
}
