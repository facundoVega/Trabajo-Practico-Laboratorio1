#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>
#define size_array 100



void mostrar_menu()
{
     printf("Presione un numero segun la accion que desea realizar\n\n");
     printf("1_Registrar empleado\n");
     printf("2_Mostrar legajos de empleados mayores a la edad promedio\n");
     printf("3_Mostrar legajos de los empleados que superen el salario promedio\n");
     printf("4_salir\n");
     
     
     
}
int validar_menu()
{
    int opcion;
    char a=0;
    do
    {
         if(a)
              printf("ERROR,el numero ingresado no corresponde \na una de las opciones del menu\nIntente nuevamente\n");
         
         mostrar_menu();
         fflush(stdin);
         scanf("%d", &opcion);
         system("cls");
         a=1;
    }
    while(opcion>size_menu|| opcion<1);
    return opcion;
    
    
    
}
int validar_legajo(int leg[],int auxLegajo)
{
     int i;
     
     
     

     
     for(i=0;i<size_array;i++)
     {
                              if(auxLegajo==leg[i])
                              {
                                                   
                                                   return 0;
                                                   break;
                              }
     }
     leg[auxLegajo-1]=auxLegajo;
     return 1;
}
int registrar_empleado(int leg[],float sueldo[],int edad[],int cont)
{
     
     int j;
     int i=0;
     char a=0;
     int legajo;
     
     while(i==0)
     {
                do
                {
                            if(a)
                                 printf("El legajo debe ser un valor entre 1 y 100\nIntente nuevamente\n");
                     
                     
                                 printf("Ingrese legajo del empleado\n");
                                 fflush(stdin);
                                 scanf("%d", &legajo);
                                 system("cls");
                                 a=1;
                }
                while(legajo>size_array||legajo<1);
                a=0;
                if (validar_legajo(leg,legajo))
                   i++;
                else
                    printf("Legajo repetido intente nuevamente\n");
                   
     }
                
                
                
     
     printf("Ingrese edad del empleado\n");
     fflush(stdin);
     scanf("%d", &edad[legajo-1]);
     system("cls");
     
     printf("Ingrese sueldo del empleado\n");
     fflush(stdin);
     scanf("%f", &sueldo[legajo-1]);
     system("cls");
     cont++;
     return cont;
     
}
int validar_ingreso(int leg[])
{
    int i;
    for(i=0;i<size_array;i++)
    {
                             if(leg[i]>0)
                             {
                                       return 1;
                                       break;
                                       
                             }
                             
                             
    }
    return 0;
    
    
}
void mostrar_legajo(int edad[],int leg[])
{
     int contEmpleados=0;
     int acumulEdad=0;
     float promedio;
     int z;
     int i=0;
     int j;
     
     
     if(validar_ingreso(leg)==0)
     {
                              printf("No se registro ningun empleado por lo tanto no \nse puede efectuar la accion que selecciono\n\n\n\n");
                              getch();
                              system("cls");
                      
                      
     }
     else
     {
                      for(z=0;z<size_array;z++)
                      {
                             acumulEdad=acumulEdad+edad[z];                
                             if(edad[z]>0)
                             {
                                        contEmpleados++;
                         
                         
                             }             
                              
                              
                              
                      }
                      promedio=(float)acumulEdad/contEmpleados;
     
                      printf("EDAD PROMEDIO:%.1f\n", promedio);
                      printf("Legajos de empleados cuya edad supera la edad promedio:\n\n\n");
                      for(j=0;j<size_array;j++)
                      {
                              if(edad[j]>promedio)
                              {
                                                  printf("%d\n",leg[j]);
                                                  i++;                   
                              }
                              
                              
                      }
                      if(i==0)
                      {
                              printf("ningun empleado supera la edad promedio\n\n\n");
                              
                      }
                      
                      printf("presione cualquier tecla para volver al menu\n");
                      getch();
                      system("cls");
     
     }
}
void mostrar_sueldo(float sueldo[],int legajo[])
{
     float promedio=0;
     int acumulSueldo=0;
     int cont=0;
     int i;
     int j;
     int z=0;
     
     if(validar_ingreso(legajo)==0)
     {
                                   printf("No se registro ningun empleado por lo tanto\n no se puede efectuar la accion seleccionada\n\n\n");
                                   printf("presione cualquier tecla para volver al menu principal\n\n\n");
                                   getch();
                                   system("cls");
                           
                           
                           
     }
     else
     {
         for(i=0;i<size_array;i++)
         {
                                  if(sueldo[i]>0)
                                  {
                                                        acumulSueldo=acumulSueldo+sueldo[i];
                                                        cont++;
                                  }
                                  
         }
         
         promedio=(float)acumulSueldo/cont;
         printf("SUELDO PROMEDIO:$%.2f:\n\n\n",promedio);
         printf("Legajos de empleados que superaron el sueldo promedio:\n");
         
         for(j=0;j<size_array;j++)
         {
                                  if(sueldo[j]>promedio)
                                  {
                                                      printf("%d\n",legajo[j]);
                                                      z++;
                                                      
                                  }
                                  
         }
         if(z==0)
                 printf("Ningun empleado supero el sueldo promedio\n\n\n");
                 printf("presione cualquier tecla para volver al menu principal\n");
                 getch();
                 system("cls");
                 
         
         
         
     }
     
     
}
