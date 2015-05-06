#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void mostrar_menu()
{
     printf("cual de las siguientes acciones desea realizar\n\n\n");
     printf("1_cargar compra efectuada\n");
     printf("2_Visualizar el dia de mayor gasto de compra\n");
     printf("3_Salir\n");
     
     
}
void cargar_compra(float compra[])
{
     char a=0;
     int dia;
     float gasto;
     do
     {
          if(a)
               printf("ERROR, el dia ingresado supera la cantidad de dias que puede tener un mes\nIntente nuevamente\n\n");
               
          printf("Ingrese dia del mes cuando se efectuo la compra\n");
          fflush(stdin);
          scanf("%d",&dia);
          system("cls");
          
          a=1;
          
          
     }
     while(dia>size_array||dia<1);
     
     printf("Ingrese el gasto total de la compra\n");
     fflush(stdin);
     scanf("%f",&gasto);
     system("cls");
     
     compra[dia-1]=compra[dia-1]+gasto;
     
     
     
     
     
     
     
     
}
void mostrar_mayor(float vec[])
{
     
     float mayor=0;
     int posMayor;
     char i;
     int j;
     int z;
     
     for(j=0;j<size_array;j++)
     {
                              if(vec[j])
                                          break;
                              
                              
     }
     if(j==size_array)
     {
                      printf("No hay compras cargadas al sistema.\n");
                      getch();
                      system("cls");
                      
     }
     else
     
     {
         for(i=0;i<size_array;i++)
         {
                   if(vec[i]>mayor)
                   {
                                   mayor=vec[i];
                                   posMayor=i;
                                   
                                   
                                   
                   }           
                              
                              
                              
         }
         printf("El dia de mayor gasto fue el %d\n", posMayor+1);
         printf("El mayor gasto de compras del mes  fue de $%.2f\n", mayor);
         getch();
         system("cls");
     }
     
}
