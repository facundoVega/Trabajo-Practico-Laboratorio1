#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
    
    char numero;
    char respuesta='s';
    SetConsoleTitle("Ejercicio 9");
    
    while (respuesta=='s')
    {
          printf("Ingrese un numero que corresponda a los dias de una semana\n");
          fflush(stdin);
          scanf("%d", &numero);
          while(numero>7 || numero<0)
          {
                                   printf("ERROR,ya que su numero corresponde a un dia de la semana , porfavor ingrese un\n valor desde 1 a 7\n");
                                   fflush(stdin);
                                   scanf("%d", &numero);
          }
          system("cls");
          switch(numero)
          {
                        case 1:
                             printf("El dia que corresponde a su numero es: Lunes\n");
                             break;
                        case 2:
                             printf("El dia que corresponde a su numero es: Martes\n");
                             break;
                        case 3:
                             printf("El dia que corresponde a su numero es: Miercoles\n");
                             break;
                        case 4:
                             printf("El dia que corresponde a su numero es: Jueves\n");
                             break;
                        case 5:
                             printf("El dia que corresponde a su numero es: Viernes\n");
                             break;
                        case 6:
                             printf("El dia que corresponde a su numero es: Sabado\n");
                             break;
                        case 7:
                             printf("El dia que corresponde a su numero es: Domingo\n");
                             break;
          }
          
          printf("Desea ingresar otro numero(s/n)\n");
          fflush(stdin);
          scanf("%c", &respuesta);
          respuesta= tolower(respuesta);
          
          while(respuesta !='s' && respuesta !='n')
          {
                          printf("ERROR, conteste esta pregunta con: ''s'' para indicar ''SI'' y con: ''n''\n para indicar ''NO''\n Ingrese nuevamente su respuesta\n");
                          fflush(stdin);
                          scanf("%c", &respuesta);
                          respuesta=tolower(respuesta);
          } 
          system("cls");               
                          
                          
            
           
                                             
                                       
    }                                                       
    
  
  system("PAUSE");	
  return 0;
}
