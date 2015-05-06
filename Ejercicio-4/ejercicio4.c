#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    float base;
    float altura;
    SetConsoleTitle("Ejercicio 4");
    
    printf("Ingrese la base del triangulo\n");
    fflush(stdin);
    scanf("%f", &base);
    
    
    printf("Ingrese la altura del triangulo\n");
    fflush(stdin);
    scanf("%f", &altura);
    system("cls");
    printf("La superficie del triangulo es %.2f\n", (base*altura)/2); 
  
  system("PAUSE");	
  return 0;
}
