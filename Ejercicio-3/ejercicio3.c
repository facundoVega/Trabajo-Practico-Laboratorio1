#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    int numero;
    char contMayor=0;
    char contMenor=0;
    char i;
    SetConsoleTitle("Ejercicio 3");
    
    for(i=0;i<10;i++)
    {
                     printf("Ingrese un numero\n");
                     fflush(stdin);
                     scanf("%d", &numero);
                     system("cls");
                     
                     if(numero<0)
                     {
                                 contMenor++;
                     }
                     else
                     {
                         if(numero>0)
                         {
                                     contMayor++;
                         }
                     }                           
    }
    
    printf("La cantidad de numeros mayores a cero es de %d\n y la cantidad de numeros menores a cero es de %d\n", contMayor, contMenor);
  system("PAUSE");	
  return 0;
}
