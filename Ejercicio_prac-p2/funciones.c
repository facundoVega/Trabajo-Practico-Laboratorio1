#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "lib.h"

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
void altas(int codigo[], int auxCodigo[],char descripcion[][51],float importe[], int cantidad[])
{
     int nroCodigo;
     int a=0;
     
     while(a==0)
     {
                nroCodigo=pedir_y_validar_entero("codigo",SIZE_ARRAY,1);
                
                if(validar_repeticion_entero(nroCodigo,auxCodigo))
                {
                                                                  a=1;
                                                                  
                                                                  
                }
                else
                {
                    printf("El numero ingresado ya fue registrado.\nIntente nuevamente\n");
                    
                }

                
                
     }
     codigo[nroCodigo-1]=nroCodigo;
     nroCodigo--;
     
     pedir_y_validar_cadena("descripcion",descripcion[nroCodigo],50);
     importe[nroCodigo]=pedir_y_validar_flotante("importe",0);
     cantidad[nroCodigo]=pedir_y_validar_entero("cantidad",1000000,1);
     
     
     
     
     
     
     
     
}
void informar(int codigo[],char descripcion[][51],float importe[],int cantidad[])
{
     if(hay_elemento(codigo))
     {
                             float mayorImporte;
                             float total;
                             float promedio;
                             int mayorPromedio;
                             
                             mayorImporte=mayor_float(importe,codigo);
                             total=total_floats(importe,codigo);
                             promedio=promediar(importe,total,codigo);
                             mayorPromedio=mayores_promedio(promedio,importe,codigo);
                             
                             mostrar_mayores(mayorImporte,codigo,descripcion,cantidad,importe);
                             
                             printf("TOTAL:$%.2f\n",total);
                             printf("PROMEDIO:$%.2f\n",promedio);
                             printf("SUPERAN PROMEDIO:%d\n\n\n\n\n",mayorPromedio);
                             
                              system("PAUSE");
                              system("cls");
                              
     }
     else
     {
         
         mensaje_no_disponible();
         
     }
     
     
     
}

void baja(int auxCodigo[], int codigo[])
{
     if(hay_elemento(codigo))
     {                       
                             int numeroLeg;
                             int posicion;
                             int posicionAux;
                             int a=0;
                             
                             while(a==0)
                             {
                                        numeroLeg=pedir_y_validar_entero("codigo para dar de baja",SIZE_ARRAY,1);
                                        posicion=existe_numero(codigo,numeroLeg);
                                        
                                        if(posicion==-1)
                                        {
                                                        printf("El codigo ingresado no pertenece a ningun producto registrado previamente\nIntente nuevamente\n");
                                                        
                                                        
                                        }
                                        else
                                        {
                                            a=1;
                                            
                                        }
                                        
                                        
                             }
                             
                             
                             codigo[posicion]=0;
                             posicionAux=existe_numero(auxCodigo,numeroLeg);
                             auxCodigo[posicionAux]=-1;
                             
                             
                             
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
     
     
}
void modificar(int codigo[],char descripcion[][51],float importe[],int cantidad[])
{
     if(hay_elemento(codigo))
     {
                             int numeroLeg;
                             int posicion;
                             int opcion=1;
                             
                             int a=0;
                             
                             while(a==0)
                             {
                                        numeroLeg=pedir_y_validar_entero("codigo para dar de baja",SIZE_ARRAY,1);
                                        posicion=existe_numero(codigo,numeroLeg);
                                        
                                        if(posicion==-1)
                                        {
                                                        printf("El codigo ingresado no pertenece a ningun producto registrado previamente\nIntente nuevamente\n");
                                                        
                                                        
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
                                                      importe[posicion]=pedir_y_validar_flotante("nuevo importe",0);
                                                      break;
                                                 
                                                 case 3:
                                                      cantidad[posicion]=pedir_y_validar_entero("nueva cantidad",1000000,1);
                                                      break;
                                                      
                                                      
                                                      
                                                      
                                                 
                                   }          
                                             
                             }
                             
                             
                             
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
     
     
     
     
}

void listar(int codigo[],char descripcion[][51],float importe[],int cantidad[])
{
     if(hay_elemento(codigo))
     {
                            ordenar_arrays_paridad(codigo,descripcion,cantidad,importe); 
                            mostrar_arrays(codigo,descripcion,importe,cantidad);
                             
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
     
     
}




/*
 *inicializar un array de enteros a un valor especifico
 */
void inicializador_array_int(int vector[],int numero)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              vector[i]=numero;
                              
                              
                              
     }
     
     
     
     
}

