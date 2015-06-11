#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include "funciones2.h"

int main(int argc, char *argv[])
{
    ArrayList* pList;
    int opcion;
    
    pList=newArrayList();
    
    while(opcion!=3)
    {
                    
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       ingresar(pList);
                                       break;
                                  
                                  
                                  case 2:
                                       mostrar(pList);
                                       break;
                                  
                                  
                                  
                    }
                    
                    
                    
    }
  
  
  system("PAUSE");	
  return 0;
}
