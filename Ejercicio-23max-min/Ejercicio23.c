#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    float milimetros;
    char i;
    int diaMax;
    int diaMin;
    float promedio;
    char cantDias;
    char inicial=0;
    float mayorCant;
    float menorCant;
    float acumuladorDeAgua=0;
    
    SetConsoleTitle("Ejercicio 23");
    
    do   
    {
         printf("Ingrese la cantidad de dias que tiene el mes a evaluar\n");
         fflush(stdin);
         scanf("%d", &cantDias);
         system("cls");
          
      if(cantDias<28 || cantDias>31)
      {
                     printf("ERROR,un mes puede tener como minimo 28 y como maximo 31 dias ,  \nintente de nuevo\n");
                     
      }   
    }
   while(cantDias<28 || cantDias>31);
   system("cls");
   
   for(i=1;i<=cantDias;i++)
   {
                           printf("Ingrese cantidad de agua caida expresada en milimetros para el dia %d\n", i);
                           fflush(stdin);
                           scanf("%f", &milimetros);
                           system("cls");
                                  
                           if(inicial==0)
                           {
                                                                                
                                       mayorCant=milimetros;
                                       menorCant=milimetros;
                                       inicial=1;       
                                                
                           }
                           
                                  
                           if(milimetros>mayorCant)
                           {                       
                                                   mayorCant=milimetros;
                                                   diaMax=i;
                                                          
                                                          
                           }
                                  
                           if(milimetros<menorCant)
                           {
                                                   
                                                          
                                     menorCant=milimetros;
                                     diaMin=i;
                                                          
                           }
                                  
                           acumuladorDeAgua=acumuladorDeAgua+milimetros;
                                  
                                  
          } 
          
          promedio=acumuladorDeAgua /cantDias;
          
          printf("El dia de mayor lluvia fue el dia numero: %d del mes\n", diaMax);
          printf("El dia de menor lluvia fue el dia numero: %d del mes\n\n\n", diaMin);
          printf("El promedio del mes es de %.2f\n", promedio);
  
  system("PAUSE");	
  return 0;
}
 
