#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <windows.h>
#define size_array 100


int main(int argc, char *argv[])
{
    float promedio;
    int opcion=0;
    int auxLegajo=0;
    int legajo[size_array];
    int edad[size_array];
    float salario[size_array];
    int i;
    
    SetConsoleTitle("Ejercicio 42(vectores)");
    
    
    for(i=0;i<size_array;i++)
    {
                             edad[i]=0;
                             
                             
    }
    
    while(opcion!=4)
    {
                    opcion=validar_menu();
                    switch(opcion)
                    {
                                  case 1:
                                       if(auxLegajo==size_array)
                                       {
                                                                printf("ya se efectuaron todos los registros \nPor lo tanto esta opcion ya no es valida\n");
                                                                break;                       
                                       }
                                       else
                                       {
                                        auxLegajo=registrar_empleado(legajo,edad,salario,auxLegajo);
                                        break;
                                        }
                                  case 2:
                                       
                                       promedio=promedio_edad(edad);
                                       if(promedio!=-1)
                                       {
                                                       printf("El promedio de edad es de %.1f\n",promedio);
                                                       getch();
                                                       system("cls");
                                                       
                                       }
                                       else
                                       {
                                           printf("No se ingresaron empleados por lo tanto no se puede sacar\nEl promedio de edad\n");
                                           getch();
                                           system("cls");
                                           
                                           
                                       
                                       }
                                       break;
                                       
                                  case 3:
                                       mayores_promedio(legajo,edad);
                                       break;
                                  
                                  
                    }
                    
                    
    }
  system("PAUSE");	
  return 0;
}
