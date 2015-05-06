#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

void mostrar_menu()
{
     printf("\tMENU:\n\n");
     printf("1_sumar\n");
     printf("2_Restar\n");
     printf("3_multiplicar\n");
     printf("4_dividir\n");
     printf("5_Salir\n\n");
     
     
     
     
}

void sumar()
{
    float num1;
    float num2;
    float result;
    
     num1=pedir_num();
     num2=pedir_num();
     
     
     
     result=num1+num2;
     mostrar_result(result);
     
     
}

void restar()
{
     float num1;
     float num2;
     float result;
     
     num1=pedir_num();
     num2=pedir_num();
     result=num1-num2;
     
     
     mostrar_result(result);
     
     
     
}

void multiplicar()
{
     float num1;
     float num2;
     float result;
     
     num1=pedir_num();
     num2=pedir_num();
     
     result=num1*num2;
     
     mostrar_result(result);
     
     
     
}

void dividir()
{
     float num1;
     float num2;
     float result;
     
     num1=pedir_num();
     num2=pedir_num();
     
     if(num2==0)
     {
                printf("Su resultado es indeterminado\n");
                getch();
                system("cls");
                
                
     }
     else
     {
         
         result=num1/num2;
         mostrar_result(result);
         
     }
     
     
     
}
float pedir_num()
{
    float num;
    printf("Ingrese numero\n");
    fflush(stdin);
    scanf("%f", &num);
    system("cls");
    
    return num;
    
    
}
void mostrar_result(float result)
{
     printf("Su resultado es %.1f",result);
     getch();
     system("cls");
     
     
     
}
