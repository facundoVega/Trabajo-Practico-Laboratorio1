#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "lib.h"

int main(int argc, char *argv[])
{
    int auxLegajo[SIZE_ARRAY];
    int legajo[SIZE_ARRAY];
    char nombre[SIZE_ARRAY][51];
    char apellido[SIZE_ARRAY][51];
    float salario[SIZE_ARRAY];
    int sector[SIZE_ARRAY];
    char fecha[SIZE_ARRAY][11];
    int opcion=1;
    
    inicializador_array_int(auxLegajo,-1);
    inicializador_array_int(legajo,0);
    inicializador_array_float(salario,0);
    
    
    while(opcion!=6)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       altas(auxLegajo,legajo,nombre,apellido,salario,sector,fecha);
                                       break;
                                       
                                  case 4:
                                       informar(legajo,auxLegajo,nombre,apellido,salario,sector,fecha);
                                       break;
                                       
                                  case 3:
                                       baja(legajo,auxLegajo);
                                       break;
                                       
                                  case 2:
                                       modificar(auxLegajo,legajo,nombre,apellido,salario,sector,fecha);
                                       break;
                                       
                                  case 5:
                                       listar(legajo,nombre,apellido,salario,sector,fecha);
                                       break;
                                       
                                  
                    }
                                    
                    
    }
  
  //system("PAUSE");	
  return 0;
}
