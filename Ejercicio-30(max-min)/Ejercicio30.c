#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  
    SetConsoleTitle("Ejercicio 30");
    
    float salario;
    float tarifaHoraria;
    char nombre[21];
    char respuesta='s';
    char a=0;
    int horas;
    int contEmpleados=0;
    char nombreMayorSalario[21];
    char nombreMenorSalario[21];
    float salarioMayor;
    float salarioMenor;
    char inicial=0;
    
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
          
          if(inicial==0)
          {
                        salarioMayor=salario;
                        strcpy(nombreMayorSalario,nombre);
                        salarioMenor=salario;
                        strcpy(nombreMenorSalario,nombre);
                        inicial=1;
                        
                        
          }
          if(salario>salarioMayor)
          {
                                  salarioMayor=salario;
                                  strcpy(nombreMayorSalario,nombre);
                                  
          } 
          if(salario<salarioMenor)
          {
                                  salarioMenor=salario;
                                  strcpy(nombreMenorSalario,nombre);
                                  
                                  
          }
          
          
          
    }  
    system("cls");  
    
    printf("La cantidad de empleados a los que se les calculo el sueldo es de: %d\n\n\n",contEmpleados);
    
    if(contEmpleados>1)
    {
                                          printf("El empleado de mayor salario es: %s y su salario es de: $%.2f\n",nombreMayorSalario,salarioMayor);
                                          printf("El empleado de menor salario es:%s y su salario es de: $%.2f\n\n\n\n",nombreMenorSalario,salarioMenor);
     }
  system("PAUSE");	
  return 0;
  
}
