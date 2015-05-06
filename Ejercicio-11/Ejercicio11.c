#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    int i;
    
    SetConsoleTitle("Ejercicio 11");
    
    for(i=2;i<=100;i=i+2)
    {
                        printf("%d\n", i);
     }
                         
  
  system("PAUSE");	
  return 0;
}
