#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
    int numero;
    
    SetConsoleTitle("Ejercicio 2");    
    printf("Ingrese un numero\n");
    fflush(stdin);
    scanf("%d", &numero);
    
    while(numero<=0)
    {
                   printf("ERROR, el numero debe ser mayor que cero\nIngrese nuevamente\n");
                   fflush(stdin);
                   scanf("%d", &numero);
    }
    
   printf("El cuadrado del numero ingresado es %d\n\n ", numero*numero);  
   system("PAUSE");	
   return 0;
}
