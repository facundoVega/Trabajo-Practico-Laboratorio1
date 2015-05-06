#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    
    SetConsoleTitle("Ejercicio 35(vectores)");
    
    int vector[10];
    char i;
    char j;
    
    for(i=0;i<10;i++)
    {
                     printf("Ingrese valor para el vector en la posicion %d\n", i+1);
                     fflush(stdin);
                     scanf("%d", &vector[i]);
                     system("cls");
                     
                     
                     
    }
    
    for(j=0;j<=9;j++)
    {
                     printf("%d\n", vector[j]);
                     
                     
    }
    
  
  system("PAUSE");	
  return 0;
}
