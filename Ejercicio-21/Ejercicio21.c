#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



int main(int argc, char *argv[])
{
    char i;
    int numero;
    int result;
    
    SetConsoleTitle("Ejercicio 21");
    
    printf("Ingrese un numero   para realizar su tabla de multiplicar\n\n");
    fflush(stdin);
    scanf("%d", &numero);
    system("cls");
    
    printf("El numero que escogio es %d y su tabla es: \n\n", numero);
    
    
    for(i=0;i<11;i++)
    {
                     result= numero*i;
                     printf("%d x %d= %d\n", numero, i, result);
                     
                     
    }
    
  
  system("PAUSE");	
  return 0;
}
