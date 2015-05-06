#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



int main(int argc, char *argv[])
{
    float peso;
    int contMasDeOchenta=0;
    int contMenosDeOchenta=0;
    char respuesta = 's';
    
    SetConsoleTitle("Ejercicio 18");
    printf("Desea ingresar el peso de un empleado(s/n)\n");
    fflush(stdin);
    scanf("%c", &respuesta);
    respuesta= tolower(respuesta);
    while(respuesta!='s' && respuesta !='n')
    {
                         printf("ERROR, por favor responda a esta pregunta con \"s\" para indicar si y con \"n\" para indicar no.\n Ingrese nuevamente su respuesta\n");
                         fflush(stdin);
                         scanf("%c", &respuesta);
                         respuesta=tolower(respuesta);
                         system("cls");
                         
                         
                         
                         
    }
    system("cls");
    
    
    while (respuesta=='s')
    {
          printf("Ingrese el peso del empleado\n");
          fflush(stdin);
          scanf("%f", &peso);
          system("cls");
          
          if(peso<=80)
          {
                      contMenosDeOchenta++;
                      
          }
          else
          {
              contMasDeOchenta++;
              
              
          } 
          
          printf("Desea registrar el peso de otro empleado(s/n)?\n");
          fflush(stdin);
          scanf("%c", &respuesta);
          respuesta= tolower(respuesta);
          while(respuesta!='s' && respuesta != 'n')
          {
                               printf("ERROR, por favor responda esta pregunta con \"s\" para indicar si y con \"n\" para indicar no\n por favor Ingrese nuevamente su respuesta\n");
                               fflush(stdin);
                               scanf("%c", &respuesta);
                               respuesta=tolower(respuesta);
                               system("cls");
                               
                               
          }        
          
    }
    printf("La cantidad de empleados que pesan hasta 80 kilos inclusive son:%d\n La cantidad de empleados que pesan mas de 80 kilos son: %d\n\n\n", contMenosDeOchenta, contMasDeOchenta);
    
    
    
    
    
  
    system("PAUSE");	
    return 0;
}
