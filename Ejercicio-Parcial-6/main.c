#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "validaciones.h"

int main(int argc, char *argv[])
{
    int auxCodigo[SIZE_ARRAY];
    int opcion=0;
    int codigo[SIZE_ARRAY];
    char descripcion[SIZE_ARRAY][51];
    float importe[SIZE_ARRAY];
    int cantidad[SIZE_ARRAY];
    
    inicializador_array_int(codigo,0);
    inicializador_array_int(auxCodigo,-1);
    inicializador_array_float(importe,0);
    
    while(opcion!=6)
    {
                    opcion=mostrar_y_validar_menu();
                    switch(opcion)
                    {
                                  case 1:
                                       altas(codigo,auxCodigo,descripcion,importe,cantidad);
                                       break;
                                       
                                       
                                  case 2:
                                       modificar(codigo);
                                       break;
                                       
                                  case 3:
                                       baja(codigo);
                                       break;
                                       
                                  case 4:
                                       informar(codigo,descripcion,importe,cantidad);
                                       break;
                                       
                                  case 5:
                                       listar(codigo);
                                       break;
                                  
                                  
                                  
                    }
                    
                    
                    
    }
  
  //system("PAUSE");	
  return 0;
}
