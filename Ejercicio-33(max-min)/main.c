#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    
    int legajo;
    char nombre[21];
    float promedio;
    int mejorLegajo;
    float mejorPromedio=0;
    char mejorAlumno[21];
    char respuesta='s';
    int contAprob=0;
    int contDiciembre=0;
    int contMarzo=0;
    int a=0;
    
    SetConsoleTitle("Ejercicio 33");
    
    while(respuesta=='s')
    {
                         printf("Ingrese nombre del alumno\n");
                         fflush(stdin);
                         scanf("%s", nombre);
                         system("cls");
                         
                         printf("Ingrese numero de legajo\n");
                         fflush(stdin);
                         scanf("%d", &legajo);
                         system("cls");
                         
                         do
                         {
                                       if(a)
                                            printf("ERROR, el promedio debe estar comprendido entre 1 y 10\nIngrese nuevamente\n");
                                            
                                            
                                       printf("Ingrese promedio\n");
                                       fflush(stdin);
                                       scanf("%f", &promedio);
                                       system("cls");
                                       
                                       a=1;
                                       
                                       
                                       
                         }
                         while(promedio>10 || promedio<1);
                         a=0;
                         
                         if(promedio<4)
                         {
                                       contMarzo++;
                                       
                         }
                         else
                         {
                             if(promedio>=4 && promedio<7)
                             {
                                            contDiciembre++;
                                            
                             }
                             else
                             {
                                 contAprob++;
                             }    
                         }
                         
                         if(promedio>mejorPromedio)
                         {
                                                   mejorPromedio=promedio;
                                                   strcpy(mejorAlumno, nombre);
                                                   mejorLegajo=legajo;
                                                   
                         }
                         do
                         {
                                                   if(a)
                                                   {
                                                        printf("ERROR,ingrese \"s\"para indicar SI o ingrese\"n\" para indicar NO\nIngrese nuevamente\n");
                                                        
                                                        
                                                   }
                                                   printf("Desea ingresar otro alumno(s/n)?\n");
                                                   fflush(stdin);
                                                   scanf("%c", &respuesta);
                                                   system("cls");
                                                   a=1;
                         }
                         while(!(respuesta=='s' || respuesta=='n'));
                         a=0;                     
   }
   
   printf("La cantidad de alumnos que rinden en marzo es de %d\n", contMarzo);
   printf("La cantidad de alumnos que rinden en diciembre es de %d\n", contDiciembre);
   printf("La cantidad de alumnos aprobados es de %d\n", contAprob);
   printf("El alumno de mejor promedio es %s, y su Numero de legajo es %d\n\n", mejorAlumno, mejorLegajo);
    

    
    
    
  
  system("PAUSE");	
  return 0;
}
