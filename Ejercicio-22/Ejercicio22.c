#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main(int argc, char *argv[])
{
    char respuesta='s';
    int numLegajo;
    char nombre[100];
    float sueldo;
    char sexo;
    int contHombres=0;
    int contMujeres=0;
    
    SetConsoleTitle("Ejercicio 22");
    
    while(respuesta=='s')
    {
                         printf("Ingrese nombre del empleado\n");
                         fflush(stdin);
                         scanf("%s", &nombre);
                         system("cls");
                         
                         printf("Ingrese numero de legajo del empleado\n");
                         fflush(stdin);
                         scanf("%d", &numLegajo);
                         system("cls");
                         
                         printf("Ingrese sexo del empleado: \"1\" para fem o \"2\" para masc\n");
                         fflush(stdin);
                         scanf("%d", &sexo);
                         
                         while(sexo!=1 && sexo!=2)
                         {
                                       printf("ERROR,por favor ingrese nuevamente.\n valor \"1\" para femenino, valor\"2\" para masculino\n");
                                       fflush(stdin);
                                       scanf("%d", &sexo);
                                       system("cls");
                                       
                                       
                         }
                         
                         printf("Ingrese sueldo del empleado\n");
                         fflush(stdin);
                         scanf("%f", &sueldo);
                         system("cls");
                         
                         if(sueldo>500 && sexo==1)
                         {
                                       contMujeres++;
                                       
                         }
                         if(sueldo<400 && sexo==2)
                         {
                                       contHombres++;
                                       
                         }
                         
                         printf("Desea registrar otro empleado(s/n)?\n");
                         fflush(stdin);
                         scanf("%c", &respuesta);
                         respuesta=tolower(respuesta);
                         system("cls");
                         
                         
                         while(respuesta!='s' && respuesta!='n')
                         {
                                           printf("ERROR, responda esta pregunta con \"s\" para indicar si y con \"n\" para indicar no.\nPor favor ingrese nuevamente\n");
                                           fflush(stdin);
                                           scanf("%c", &respuesta);
                                           system("cls");
                                           
                                           
                         }
                         
                         
    }
    
    printf("La cantidad de mujeres que cobran mas de $500 es de: %d.\nLa cantidad de hombres que cobran menos de $400 es de: %d\n", contMujeres, contHombres);
  
  system("PAUSE");	
  return 0;
}
