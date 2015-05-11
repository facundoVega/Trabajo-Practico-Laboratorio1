#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mostrar_menu()
{
     printf("\tMENU \n\n\n");
     printf("\t1_ALTAS\n");
     printf("\t2_MODIFICAR\n");
     printf("\t3_BAJA\n");
     printf("\t4_INFORMAR\n");
     printf("\t5_LISTAR\n");
     printf("\t6_SALIR\n\n\n\n");
     printf("Elija e ingrese un numero correspondiente a la opcion\n del menu que deseaa realizar\n\n\n");
     
     
}

int mostrar_y_validar_menu()
{
    long int opcion;
    char a=0;
         
         do
         {
             if(a)
                  printf("ERROR, la opcion ingresada no corresponde a una del menu\nIntente nuevamente");
                  
                  
             mostrar_menu();
             fflush(stdin);
             scanf("%d", &opcion);
             system("cls");
             a=1;
         }
         while(opcion>6||opcion<1);
         
    return opcion;
    
    
    
}
//funcion que recibe la estructura como parametro
void altas(int codigo[],char descripcion[][51],float importe[],int cantidad[],int proxCodigo,int auxCodigo[])
{
     char a=0;
     
              codigo[proxCodigo]=pedir_y_validar_entero("codigo",1000,1,auxCodigo);
              pedir_y_validar_cadena("descripcion",descripcion[proxCodigo],50);
              pedir_flotante(importe,proxCodigo,"Importe");
              cantidad[proxCodigo]=validar_entero("cantidad",500,1);
}
void modificar()
{
     printf("modificar\n");
     
     
     
}
void baja()
{
     printf("aca doy de baja\n");
     
     
     
}
void informar(int codigo[], char descripcion[][51], float importe[], int cantidad[])
{
     if(hay_elemento(codigo))
     {
                             float totalImporte;
                             
                                   //calcular_y_mostrar_mayor_importe(importe,descripcion,codigo,cantidad);
                                   totalImporte=sumar_floats(importe,codigo);
                                   printf("%.2f\n", totalImporte);
     }
     else
     {
         mensaje_no_disponible();
         
         
         
     }

     

     
     
     
}
void listar()
{
     printf("aca listo\n");
     
     
     
}

void inicializar_array(int vector[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              vector[i]=num;
                              
                              
                              
                              
     }
     
     
     
     
}

     
     
     

void  inicializar_array_float(float vector[],float num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             vector[i]=num;
                             
                             
                             
                             
    }
    
    
    
    
    
}
int hay_elemento(int vector[])
{
    int i;
    int a=0;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
          if(vector[i]!=0)
          {
                          a=1;
                          break;
                          
                          
                          
          }                   
                             
                             
                             
                             
    }
    return a;
    
    
    
    
    
}
