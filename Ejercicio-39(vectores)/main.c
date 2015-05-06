#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    char a=0;
    char opcion;
    float dias[size_array];
    char i=0;
    SetConsoleTitle("Ejercicio 39(vectores)");
    //inicializo el vector donde se me acumularan las compras por dia.
    for(i=0;i<size_array;i++)
    {
                             dias[i]=0;
                             
                             
    }
    while(opcion!=3)
    {
                    do
                    {
                             if(a)
                             {     printf("ERROR, numero de opcion no valida\nIntente nuevamente\n\n");
                                   
                                                                    
                             }    
                             mostrar_menu();
                             fflush(stdin);
                             scanf("%d", &opcion);
                             system("cls");
                             
                             a=1;
                             
                             
                             
                             
                             }
                             while(opcion>size_menu ||opcion<1);
                             a=0;
                             
                             switch(opcion)
                             {
                                    case 1:
                                          cargar_compra(dias);
                                         break;
                                         
                                    case 2:
                                          mostrar_mayor(dias);
                                         break;       
                                           
                                           
                             }
    
   }
    
  system("PAUSE");	
  return 0;
}
