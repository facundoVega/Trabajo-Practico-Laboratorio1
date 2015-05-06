#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>
#define size_array 100



void mostrar_menu()
{
     printf("Ingrese un numero correspondiente la accion que desea realizar:\n\n");
     printf("1_Registrar empleado\n");
     printf("2_visualizar edad promedio de los empleados\n");
     printf("3_visualizar legajos de los empleados mayores a la edad promedio\n");
     printf("4_Salir\n");
     
     
     
     
}

int validar_menu()
{
    
    int eleccion;
    char a=0;
    do
    {
         if(a)
              printf("ERROR, el numero ingresado no corresponde a una de las acciones \nIntente nuevamente:\n\n\n");
              
         mostrar_menu();
         fflush(stdin);
         scanf("%d", &eleccion);
         system("cls");
         
         a=1;
         
         
     }
     while(eleccion>size_menu || eleccion<1);
     
     return eleccion;
     
    
    
    
}
int registrar_empleado(int leg[],int edad[], float sueldo[],int auxLeg)
{
     
     leg[auxLeg]=auxLeg+1;
     
     printf("Ingrese edad del empleado\n");
     fflush(stdin);
     scanf("%d", &edad[auxLeg]);
     system("cls");
     
     printf("Ingrese sueldo \n");
     fflush(stdin);
     scanf("%f", &sueldo[auxLeg]);
     system("cls");
     auxLeg++;
     return auxLeg;
     
     
}
float promedio_edad(int edad[])
{
     int z;
     int ingresoEdad=0;
     float promedio;
     int acumulEdad=0;;
     int i;
     int j;
     for(j=0;j<size_array;j++)
     {                        
                              if(edad[j])
                                         break;
                              
                              
     }
     if(j==size_array)
     {
                      return -1;
     }
     else
     {
                      
                      for(i=0;i<size_array;i++)
                      {
                                               acumulEdad=acumulEdad+edad[i];        
                              
                              
                              
                      }
                      for(z=0;z<size_array;z++)
                      {
                              if(edad[z]!=0)
                              {
                                            ingresoEdad++;
                              }
                              
                              
                      }
                      promedio=acumulEdad/ingresoEdad;
     
                      return promedio;
     }
}
void mayores_promedio(int legajo[],int edad[])
{
     int b=0;
     int i;
     float a;
     a=promedio_edad(edad);
     if(a==-1)
     {
              printf("no se registraron empleados por lo tanto no se puede realizar la accion\nseleccionada\nPresione enter para volver al menu\n");
              getch();
              system("cls");
              
              
              
     }
     else
     {
        printf("Legajos de empleados mayores que la edad promedio:\n"); 
        for(i=0;i<size_array;i++)
        {
                                 if(edad[i]>a)
                                 {
                                           printf("%d\n:",legajo[i]);
                                                     
                                                     
                                                     
                                                     
                                                     
                                 }
                                 else
                                 {
                                  b++;   
                                     
                                 }
                                 if(edad[i]==0)
                                               break;
                                 
        } 
        if(b==i+1)
        {
                         printf("No hay empleados mayores que la edad promedio\n\n\n");
                         
                         
        }
        printf("presione cualquier tecla para volver al menu principal\n");
        getch();
        system("cls");
         
     }
     
}
