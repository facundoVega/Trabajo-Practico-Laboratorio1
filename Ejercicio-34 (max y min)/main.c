#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funcion.h"

int main(int argc, char *argv[])
{
    int opcion=0;
    float num1;
    float num2;
    char a=0;
    float result;
    
    SetConsoleTitle("Ejercicio 34");
    
    while(opcion!=5)
    {
                    printf("\tMENU\n\n");
                    printf("\t1_Sumar\n");
                    printf("\t2_Restar\n");
                    printf("\t3_Multiplicar\n");
                    printf("\t4_Dividir\n");
                    printf("\t5_Salir\n\n\n");
    
    
                    do
                    {
                              if(a)
                              {     printf("ERROR,los numeros a elegir van del 1 al 5\nintente nuevamente\n\n");
                                    mostrar_menu();
                                    
                              }
                              printf("Elija una opcion y pulse su numero correspondiente\n");
                              fflush(stdin);
                              scanf("%d", &opcion);
                              system("cls");
                                        
                              a=1;
                                          
                                          
                                          
                    }
                    while(opcion>size_menu||opcion<1);
                    a=0;
    
    
                    switch(opcion)
                    {
                                  case 1:
                                       
                                        sumar();
                                        break;
                                        
                                  case 2:
                                       restar();
                                       break;
                                  case 3:
                                       multiplicar();
                                       break;
                                       
                                  case 4:
                                      dividir();
                                      break;
                                        
                                                                       
                                  
                                  
                                  
                    }
    
    
    }
  system("PAUSE");	
  return 0;
}
