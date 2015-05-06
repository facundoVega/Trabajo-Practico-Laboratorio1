#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
    char i;
    char contImpares=0;
    
    SetConsoleTitle("Ejercicio 10");
    
    for(i=1;i<=100;i=i+2)
    {
                        printf("%d\n", i);
                        
                        contImpares++;
                        
    }
    printf("Hay una cantidad de %d impares.\n", contImpares);
    
  system("PAUSE");	
  return 0;
}
