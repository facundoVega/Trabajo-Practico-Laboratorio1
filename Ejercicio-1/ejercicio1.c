#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    
  
  int numero;
  char i;
  int suma=0;
  float promedio;
  SetConsoleTitle("Ejercicio 1");
    
  for(i=0;i<5;i++)
  {
                  printf("Ingrese numero\n");
                  fflush(stdin);
                  scanf("%d", &numero);
                  system("cls");
                  
                  suma=suma+numero;
                                                   
  }
  promedio=(float)suma/5;
  printf("La media de los numeros ingresados es de %.2f\n", promedio); 
  
  system("PAUSE");	
  return 0;
}
