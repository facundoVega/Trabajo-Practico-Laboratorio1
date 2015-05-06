#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    char i;
    
    SetConsoleTitle("Ejercicio 13");
    
    for(i=100;i>=0;i--)
    {
                       printf("%d\n", i);
                       
    }  
  system("PAUSE");	
  return 0;
}
