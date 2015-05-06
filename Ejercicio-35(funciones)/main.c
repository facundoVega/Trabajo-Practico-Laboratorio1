#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int validar_numero();
void mostrar_resultados(int,int,float);

int main(int argc, char *argv[])
{
    int numero;
    char i;
    int suma=0;
    float promedio;
    int min=100;
    int max=-100;
    
    SetConsoleTitle("Ejercicio ");
    
    for(i=0;i<20;i++)
    {
                   numero=validar_numero();
                   suma=suma+numero;
                   if(numero>max)
                                 max=numero;
                                 
                   if (numero<min)
                                  min=numero;
                                  
                     
    }  
    
    promedio=suma/(float)i;
    
    mostrar_resultados(max, min,promedio);
    system("PAUSE");	
    return 0;
}

int validar_numero()
{
     char a=0;
     int num;
     
     do
     {
          if(a)
               printf("ERROR,el numero ingresado tiene que estar comprendido\n entre el rango de -100 a 100.Intentelo nuevamente\n\n\n");
               
          printf("Ingrese un numero\n");
          fflush(stdin);
          scanf("%d", &num);
          system("cls");
          
          a=1;
     }     
     while(num<-100 || num>100);
     return num;
}
void mostrar_resultados(int max, int min, float prom)
{
     if(max==min)
     {
                 printf("Todos los numeros ingresados fueron iguales \n\n");
                 
     }
     else
     {
                 printf("El numero maximo ingresado es:  %d\n", max);
                 printf("El numero minimo ingresado es:  %d\n\n", min);
                 
     }
     printf("El promedio de los numeros ingresados es de:  %.2f\n\n\n", prom);
     
     
     
}   
