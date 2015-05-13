#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include "validaciones.h"


/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_ALTAS\n");
        printf("\t2_MODIFICAR\n");
        printf("\t3_BAJA\n");
        printf("\t4_INFORMAR\n");
        printf("\t5_LISTAR\n");
        printf("\t6_SALIR\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
}
/*
 *muestra un menu en ppantalla y recibe un valor correspondiente a una de las acciones del menu.
 *valida que el numero ingresado sea uno de los valores correspondientes al menu
 *devuelve un entero que es la opcion del menu ya validada
 */
int mostrar_y_validar_menu()
{
    int a=0;
    int opcion;
    
    do
    {
        if(a)
             printf("ERROR,el numero ingresado no pertenece a una opcion valida para el menu\nIntente nuevamente\n\n");
             

             mostrar_menu();
             fflush(stdin);
             scanf("%d", &opcion);
             system("cls");
        
             a=1;
        
    }
    while(opcion<1||opcion>6);
    
    return opcion;
    
    
    
}
void altas(int codigo[],int auxCodigo[],char descripcion[][51],float importe[],int cantidad[])
{
     float num;
     int cod;
     int a=0;
     while(a==0)
     {
                cod=pedir_y_validar_entero("codigo",1000,1);
                
                if(validar_repeticion_entero(cod,auxCodigo)>0)
                {                                           
                                                            a=1;
                }
                else
                {
                    printf("El codigo ingresado ya fue registrado\nIntente nuevamente\n");
                    
                }
                
     }
     codigo[cod-1]=cod;
     
     pedir_y_validar_cadena("descripcion",descripcion[cod-1],50);
     importe[cod-1]=validar_flotante("Importe",0);
     cantidad[cod-1]=pedir_y_validar_entero("cantidad",1000000000,1);
     
     
}
void modificar(int codigo[],char descripcion[][51],float importe[], int cantidad[])
{
     if(hay_elemento(codigo))
     {
                             int a=0;
                             int cod;
                             int posicion;
                             int opcion=1;
                             
                             while(a==0)
                             {
                                        cod=pedir_y_validar_entero("codigo",1000,1);
                                        
                                        posicion=existe_numero(codigo,cod);
                                        printf("%d\n",posicion);
                                        if( posicion==-1)
                                        {
                                            printf("EL codigo ingresado no pertenece a ningun producto\nIntente nuevamente\n");
                                            
                                        }
                                        else
                                        {
                                            a=1;
                                            
                                        }
                             }
                             while(opcion!=4)
                             {
                                             opcion=mostrar_y_validar_menu_modificar();
                                             switch(opcion)
                                             {
                                                           case 1:
                                                                pedir_y_validar_cadena("nueva descripcion",descripcion[posicion],50);
                                                                break;
                                                                
                                                                
                                                           case 2:
                                                                cantidad[posicion]=pedir_y_validar_entero("Nueva cantidad",1000000000,1);
                                                                break;
                                                                
                                                                
                                                                
                                                           case 3:
                                                                importe[posicion]=validar_flotante("Nuevo importe",0);
                                                                
                                                                
                                                           
                                                           
                                                           
                                             }
                                             
                                             
                             }
                             
                             
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
     
     
     
}
void baja(int codigo[])
{
     if(hay_elemento(codigo))
     {
                             printf("baja\n");
     }
     else
     {
              
                       mensaje_no_disponible();
         
         
     }
     
}
void informar(int codigo[],char descripcion[][51],float importe[],int cantidad[])
{
     if(hay_elemento(codigo))
     {
                             float total;
                             float mayor;
                             float promedio;
                             int superanPromedio;
                             
                             mayor=mayor_float(importe,codigo);
                             total=total_floats(importe,codigo);
                             promedio=promediar(importe,total,codigo);
                             superanPromedio=mayores_promedio(promedio,importe,codigo);
                             mostrar_mayores_importes(mayor,codigo,descripcion,cantidad,importe);
                             printf("TOTAL DE IMPORTES:$%.2f\n", total);
                             printf("PROMEDIO DE IMPORTES:$%.2f\n",promedio);
                             printf("CANTIDAD DE PRODUCTOS QUE SUPERAN EL PROMEDIO: %d\n\n\n", superanPromedio);
                             
                             system("PAUSE");
                             system("cls");
                             
                             
     }
     else
     {
                       mensaje_no_disponible();      
                             
      }
     
}
void listar(int codigo[])
{
     if(hay_elemento(codigo))
     {
                             printf("listar\n");
     
     }
     else
     {
              
                       mensaje_no_disponible();
         
         
     }
}


/*
 *inicializa un array de enteros a un valor especifico
 */
void inicializador_array_int(int vector[],int numero)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              vector[i]=numero;
                              
                              
                              
     }
     
     
     
     
}
/*
/*Inicializa un array de flotantes a un valor especifico
*/
void  inicializador_array_float(float vector[],float num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             vector[i]=num;
                             
                             
                             
                             
    }
    
    
    
    
    
}
/*verifica si el array pasado como parametro tiene un valor distinto al que fue inicializado
*/
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
