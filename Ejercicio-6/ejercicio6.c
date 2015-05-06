#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    int numero;
    int result;
    SetConsoleTitle("Ejercicio 6");
  
    printf("Ingrese un numero\n");
    fflush(stdin);
    scanf("%d", &numero);
    
             
    result=numero%2;
    if(result==0)
    {
    
                 printf("El numero ingresado es par\n");
    }            
    else
    {
                 printf("El numero ingresado es impar\n");
    }        
              
              
              
        
                 
        
                 
  
  
  system("PAUSE");	
  return 0;
}
