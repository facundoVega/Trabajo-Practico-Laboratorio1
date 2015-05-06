#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"
#define size_array 100

int main(int argc, char *argv[])
{
    int cont=0;
    int legajo[size_array];
    int edad[size_array];
    float sueldo[size_array];
    char opcion;
    int i;
    for(i=0;i<size_array;i++)
    {
                             edad[i]=0;
                             legajo[i]=0;
                             sueldo[i]=0;
                             
                             
    }
    
    SetConsoleTitle("Ejercicio-43(vectores)");
    while(opcion!=4)
    {
                    opcion=validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       if(cont==size_array)
                                       {
                                                           
                                                           printf("Ya se registro la cantidad maxima de empleados\nesta opcion ya no esta disponible\n\n\n");
                                                           printf("presione cualquier tecla para volver al menu incial\n");
                                                           getch();
                                                           system("cls");
                                                           
                                       }
                                       else
                                       {
                                        
                                           cont=registrar_empleado(legajo,sueldo,edad,cont);
                                        }
                                       break;
                                       
                                  case 2:
                                       mostrar_legajo(edad,legajo);
                                       break;
                                       
                                  case 3:
                                       mostrar_sueldo(sueldo,legajo);
                                       break;
                                       
                                  
                                  
                                  
                                  
                    }
                    
                    
    }
    
  
  system("PAUSE");	
  return 0;
}
