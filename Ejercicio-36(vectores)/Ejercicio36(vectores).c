#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    
    int vector[10];
    int posicion;
    char i;
    int valor;
    char a=0;
    char c;
    int aux[10];
    char j;
    char k;
    int m;
       
    SetConsoleTitle("Ejercicio 36(vectores)");
    
    for(c=0;c<10;c++)
    {
                     aux[c]=-1;
                     
                     
    }
    
    for(i=0;i<10;i++)
    {
                     do
                     {
                               if(a)
                                    printf("ERROR, la posicion tiene que estar comprendida\nentre el rango del 1 al 10.\nIntente nuevamente.");
                                    
                               
                               printf("Ingrese la posicion donde desea almacenar un valor \n(tiene que ser una posicion comprendida entre el 1 y el 10)\n ");
                               fflush(stdin);
                               scanf("%d", &posicion);
                               system("cls");
                               
                               a=1;
                     }
                     while(posicion>10||posicion<1);
                     a=0;
                     posicion--;
                     
                     for(j=0;j<10;j++)
                     {
                                      if(aux[j]==posicion)
                                                          break;
                                      
                     }
                     if(j==10)
                     {
                              for(k=0;k<10;k++)
                              {
                                               if(aux[k]==-1)
                                               {
                                                             aux[k]=posicion;
                                                             break;
                                               }
                                               
                                               
                              }
                              printf("Ingrese valor para la posicion %d\n", posicion+1);
                              fflush(stdin);
                              scanf("%d", &vector[posicion]);
                              system("cls");
                              
                              
                              
                              
                     }  
                     else
                     {
                              printf("La posicion ingresada esta repetida\nIntente nuevamente\n\n\n");
                              
                              
                              
                              
                              i--;
                         
                         
                     }               
                     
                     
    
                     
                     
                     
                     
                     
                     
                     
    }
    
    for(m=0;m<10;m++)
    {
                     printf("%d\n", vector[m]);
                     
                     
    }
    
  
  system("PAUSE");	
  return 0;
}
