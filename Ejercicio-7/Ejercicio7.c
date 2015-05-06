#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


int main(int argc, char *argv[])
{
    float centimetros;
    int pies;
    float pulgadas;
    
    SetConsoleTitle("Ejercicio 7");
    
    printf("Ingrese los centimetros\n");
    scanf("%f", &centimetros);
    system("cls");
    
    pulgadas=centimetros/2.54;
    pies=centimetros/30.48;
    
    printf("%.1f cms son %d pies y %.1f pulgadas\n", centimetros, pies, pulgadas);
  
  system("PAUSE");	
  return 0;
}
