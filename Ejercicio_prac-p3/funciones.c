#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
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
void altas(int auxLegajo[], int legajo[],char nombre[][51],char apellido[][51],float salario[],int sector[],char fecha[][11])
{
     int nroLeg;
     int a=0;
     
     while(a==0)
     {
                nroLeg=pedir_y_validar_entero("legajo",SIZE_ARRAY,1);
                
                if(validar_repeticion_entero(nroLeg,auxLegajo))
                {
                                                               a++;
                                                               
                }
                else
                {
                    printf("Numero repetido\nIntente nuevamente\n");
                }
                
                
     }
     
     legajo[nroLeg-1]=nroLeg;
     nroLeg--;
     
     pedir_y_validar_cadena("nombre",nombre[nroLeg],50);
     pedir_y_validar_cadena("apellido",apellido[nroLeg],50);
     salario[nroLeg]=pedir_y_validar_flotante("salario",0);
     pedir_y_validar_cadena("fecha",fecha[nroLeg],10);
     sector[nroLeg]=mostrar_y_validar_sectores();
     
     
     
     
}

void informar(int legajo[],int auxLegajo[],char nombre[][51],char apellido[][51],float salario[],int sector[],char fecha[][11])
{
     if(hay_elemento(legajo))
     {
                             
                             float total;
                             float promedio;
                             int cantMayPromedio;
                             
                             total=total_floats(salario,legajo);
                             promedio=promediar(salario,total,legajo);
                             cantMayPromedio=mayores_promedio(promedio,salario,legajo);
                             
                             mostrar_arrays(legajo,nombre,apellido,salario,sector,fecha);
                             printf("TOTAL SALARIO:$%.2f\n",total);
                             printf("PROMEDIO SALARIOS:$%.2f\n",promedio);
                             printf("SUELDOS MAYORES AL PROMEDIO:%d\n\n\n\n",cantMayPromedio);
                             
                             
                             system("PAUSE");
                             system("cls");
     }
     else
     {
         
          mensaje_no_disponible();
         
     }
     
     
     
}
void baja(int legajo[],int auxLegajo[])
{
     if(hay_elemento(legajo))
     {
                             int a=0;
                             int nroLeg;
                             int pos;
                             int auxPos;
                             
                             while(a==0)
                             {
                                        nroLeg=pedir_y_validar_entero("legajo a dar de baja",SIZE_ARRAY,1);
                                        pos=existe_numero(legajo,nroLeg);
                                        
                                        if(pos==-1)
                                        {
                                                   printf("El numero ingresado no fue registrado previamente\nIntente nuevamente\n");
                                                   
                                        }
                                        else
                                        {
                                            a=1;
                                            
                                            
                                        }
                                        
                                        
                             }
                             auxPos=existe_numero(auxLegajo,nroLeg);
                             
                             legajo[pos]=0;
                             auxLegajo[auxPos]=-1;
                             
                             
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
     
     
}
void modificar(int auxLegajo[],int legajo[],char nombre[][51],char apellido[][51],float salario[],int sector[],char fecha[][11])
{
     if(hay_elemento(legajo))
     {
                             int a=0;
                             int nroLeg;
                             int pos;
                             int opcion=1;
                             
                             while(a==0)
                             {
                                        nroLeg=pedir_y_validar_entero("legajo a dar de baja",SIZE_ARRAY,1);
                                        pos=existe_numero(legajo,nroLeg);
                                        
                                        if(pos==-1)
                                        {
                                                   printf("El numero ingresado no fue registrado previamente\nIntente nuevamente\n");
                                                   
                                        }
                                        else
                                        {
                                            a=1;
                                            
                                            
                                        }
                                        
                                        
                             }
                             while(opcion!=6)
                             {
                                             opcion=mostrar_y_validar_menu_modificar();
                                             
                                             switch(opcion)
                                             {
                                                           case 1:
                                                                pedir_y_validar_cadena("nuevo nombre",nombre[pos],50);
                                                                break;
                                                                
                                                           case 2:
                                                                pedir_y_validar_cadena("nuevo apellido",apellido[pos],50);
                                                                break;
                                                           
                                                           case 3:
                                                                salario[pos]=pedir_y_validar_flotante("nuevo salario",0);
                                                                break;
                                                                
                                                           case 4:
                                                                sector[pos]=mostrar_y_validar_sectores();
                                                                break;
                                                                
                                                           case 5:
                                                                pedir_y_validar_cadena("nueva fecha",fecha[pos],10);
                                                                break;
                                                           
                                                                
                                                                
                                                           
                                             }


                                             
                                             
                             }
                             
                             
                             
     }
     else
     {
         mensaje_no_disponible();
     }
     
     
     
}

void listar(int legajo[],char nombre[][51],char apellido[][51],float salario[],int sector[],char fecha[][11])
{
     if(hay_elemento(legajo))
     {
     
                ordenar_arrays_alfabeticamente(legajo,nombre,apellido,salario,sector,fecha);
                mostrar_por_seccion(legajo,nombre,apellido,salario,sector,fecha,"CONTABILIDAD",1);
                mostrar_por_seccion(legajo,nombre,apellido,salario,sector,fecha,"ADMINISTRACION",2);
                mostrar_por_seccion(legajo,nombre,apellido,salario,sector,fecha,"COMPRAS",3);
                mostrar_por_seccion(legajo,nombre,apellido,salario,sector,fecha,"VENTAS",4);
     
     
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
}
