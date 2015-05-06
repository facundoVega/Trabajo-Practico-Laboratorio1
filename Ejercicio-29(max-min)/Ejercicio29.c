#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])

{
    
    SetConsoleTitle("Ejercicio 29");
    
    float salario;
    float tarifaHoraria;
    char nombre[21];
    char respuesta='s';
    char a=0;
    int horas;
    int contEmpleados=0;
    
    while (respuesta=='s')
    {
          printf("Ingrese el nombre del trabajador\n");
          fflush(stdin);
          gets(nombre);
          system("cls");
          
          printf("Ingrese la tarifa horaria\n");
          fflush(stdin);
          scanf("%f", &tarifaHoraria);
          system("cls");
          
          printf("Ingrese la cantidad de hs trabajadas en la semana por el trabajador\n");
          fflush(stdin);
          scanf("%d", &horas);
          system("cls");
          
          salario=tarifaHoraria*horas;
          
          printf("NOMBRE\t SALARIO SEMANAL\n%s\t  $%.2f\n\n\n",nombre, salario);
          
          do
          {
                           if(a==1)
                           {
                                   printf("ERROR, pulse \"s\" para indicar si y \"n\" para indicar no\nIntente nuevamente\n");
                                   
                           }
                           printf("Desea ingresar otro trabajador(s/n)?\n");
                           fflush(stdin);
                           scanf("%c", &respuesta);
                           respuesta=tolower(respuesta);
                           
                           a=1;
                           
                           
          }
          while(respuesta!='s' && respuesta!='n');                   
          a=0;
          contEmpleados++;
    }
    printf("Se calculo el salario a %d empleados.\n\n",contEmpleados);    
  
  system("PAUSE");	
  return 0;
    
  
  
}
