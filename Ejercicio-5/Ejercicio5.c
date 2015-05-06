#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    float numero;
    SetConsoleTitle("Ejercicio 5");
    
    printf("Ingrese un numero\n");
    fflush(stdin);
    scanf("%f", &numero);
    
    if(numero<0)
    {
                printf("El numero ingresado es negativo\n");
                
    }
    else
    {
        if(numero>0)
        {
                    printf("El numero ingresado es positivo\n");            
        }
        else
        {
            printf("El numero ingresado es neutro\n");
        }
    }                  
  system("PAUSE");	
  return 0;
}
