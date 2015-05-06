#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  int numero;
  int i;
  
  SetConsoleTitle("Ejercicio 17");
  
  printf("Ingrese un numero para realizar la tabla\n");
  fflush(stdin);
  scanf("%d", &numero);
  
  printf("NUMERO\t CUADRADO \t CUBO\n");
  for(i=1;i<=numero;i++)
  {
                        printf("%d\t  %d\t\t  %d\n", i, i*i, i*i*i );
                        
                        
                        
                        
  }
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
