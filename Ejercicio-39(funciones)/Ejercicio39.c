#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
#include <windows.h>



int main(int argc, char *argv[])
{
    char respuesta=1;
    int numero;
    int suma=0;
    int contNum=0;
    
    SetConsoleTitle("Ejercicio 39");
    
    while(respuesta==1)
    {
                    printf("Ingrese un numero entero\n");
                    fflush(stdin);
                    scanf("%d", &numero);
                    contNum++;
                    suma = suma+numero;            
                                
                             respuesta=validarS_N();                         
                    
    }
    if(contNum==1)
    {
                     printf("La cantidad de numeros ingresados es de uno por lo tanto no se efectuo\n ninguna suma.\nDe todas formas su numero ingresado es: %d\n\n", numero);
                     
                     
    }
    else
    { 
                     printf("La suma de los numeros ingresados es de: %d \n\n", suma);
                     
     }
     
     system("PAUSE");	
     return 0;
}
