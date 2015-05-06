#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>



int main(int argc, char *argv[])
{
    float valorHora;
    char Nombre[100];
    char antiguedad;
    int hsTrabajadas;
    float saldoBruto;
    float aumentoAntiguedad=30.00;
    float desc =0.13;
    float descDelImporte;
    float importeNeto;
    
    SetConsoleTitle("Ejercicio 20");
    
    printf("Ingrese valor de hora de trabajo del empleado\n");
    fflush(stdin);
    scanf("%f", &valorHora);
    system("cls");
    
    printf("Ingrese la cantidad de hs trabajadas en el mes por el empleado  \n");
    fflush(stdin);
    scanf("%d", &hsTrabajadas);
    system("cls");
    
    
    printf("Ingrese la antiguedad del empleado (cantidad de anios)\n");
    fflush(stdin);
    scanf("%d", &antiguedad);
    system("cls");
    
    
    printf("Ingrese el nombre del empleado \n");
    fflush(stdin);
    scanf("%s", Nombre);
    system("cls");
    
    
    saldoBruto=(valorHora*hsTrabajadas)+(antiguedad*aumentoAntiguedad);
    descDelImporte=saldoBruto*desc;
    importeNeto=saldoBruto-descDelImporte;
    
    
    printf("NOMBRE  ANTIGUEDAD  VALOR/HORA  SALDO/BRUTO  TOTAL/DESC  SALDO NETO A COBRAR\n%s\t%d años\t     $%.2f\t  $%.2f\t$%.2f\t\t$%.2f\n\n\n", Nombre,antiguedad,valorHora,saldoBruto,descDelImporte,importeNeto);
  
  system("PAUSE");	
  return 0;
}
