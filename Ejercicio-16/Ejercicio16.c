#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
    int comodin;
    int num1;
    int num2;
  SetConsoleTitle("Ejercicio 16");
  
  printf("Ingrese el valor para la variable \"num1\" por favor\n");
  fflush(stdin);
  scanf("%d", &num1);
  printf("Ingrese el valor para la variable \"num2\" por favor\n");
  fflush(stdin);
  scanf("%d", &num2);
  
  comodin=num1;
  num1=num2;
  num2=comodin;
  
  printf("El valor de la variable \"NUM1\" cambiado es: %d\n\n\n", num1);
  printf("El valor de la variable \"NUM2\" cambiado es: %d\n\n\n", num2);
  
  system("PAUSE");	
  return 0;
}
