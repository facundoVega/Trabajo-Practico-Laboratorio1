#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

 

int main(int argc, char *argv[])
{
    
    int auxCodigo[SIZE_ARRAY];         
    int codigo[SIZE_ARRAY];
    char descripcion[SIZE_ARRAY][51];
    float importe[SIZE_ARRAY];
    int cantidad[SIZE_ARRAY];
    int opcion=0;            
    int proximoCodigo=0;
    
    
    inicializar_array(auxCodigo,-1);
    inicializar_array(codigo,0);
    inicializar_array_float(importe,0);
    
    while(opcion!=6)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1://aca envio la estructura a la funcion
                                       altas(codigo,descripcion,importe,cantidad,proximoCodigo,auxCodigo);
                                       proximoCodigo++;
                                       break;
                                       
                                  case 2:
                                       modificar();
                                       break;
                                       
                                       
                                  case 3:
                                       baja();
                                       break;
                                       
                                  case 4:
                                       informar(codigo,descripcion,importe,cantidad);
                                       break;
                                       
                                  case 5:
                                       listar();
                                       break;
                                  
                                  
                                  
                                  
                    }
                    
                    
    } 
    
  
  //system("PAUSE");	
  return 0;
}
