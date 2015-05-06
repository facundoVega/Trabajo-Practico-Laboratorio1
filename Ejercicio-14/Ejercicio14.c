#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



int main(int argc, char *argv[])
{
    char i;
    int suma=0;
    
    SetConsoleTitle("Ejercicio 14");
    
    for(i=3;i<=99;i=i+3)
    {
                        printf("%d\n", i);
                        suma= suma +i;
    }
    
    printf("La suma es: %d\n", suma );
    
  system("PAUSE");	
  return 0;
}
