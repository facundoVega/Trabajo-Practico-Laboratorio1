#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


int main(int argc, char *argv[])
{
  
  int max;
  int min;
  char fecha[11];
  char aux[100];
  int inicial=0;
  int tempMax;
  int tempMin;
  int a=0;
  char fechaMax[11];
  char fechaMin[11];
  int respuesta='s';
  int b=0;
  int c=0;
  int cont=0;
  
  
  
  SetConsoleTitle("Ejercicio 26");
  while(respuesta=='s')
  {
   
                             printf("ingrese fecha en este formato(xx/xx/xxxx)\n");
                             fflush(stdin);
                             gets(aux);
                             system("cls");
  
                             while(strlen(aux)>10)
                             {
                                                  printf("ERROR,ingreso digitos de mas . \nIntentelo nuevamente\n");
                                                  fflush(stdin);
                                                  gets(aux);
                             }
                             strcpy(fecha,aux);
  
                             do
                             {
                                           if(a==1)
                                           {
                                                   printf("ERROR, solo se admitira en temperatura maxima hasta cien grados\nIntentelo nuevamente\n");
                        
                                            }
  
                                            printf("Ingrese temperatura maxima del dia en grados\n");
                                            fflush(stdin);
                                            scanf("%d", &tempMax);
                                            system("cls");
  
  
                                            a=1;
  
                             }
                             
                             while(tempMax>100);             
                             a=0;
                        
                             do
                             {
                                             
                                             ; 
                                             if(b==1)
                                             {
                                                     printf("ERROR, solo se admitira para temperatura minima valores hasta el -100 grados centigrados\n");
                        
                                              }       
                
                                              printf("Ingrese temperatura minima del dia en grados\n");
                                              fflush(stdin);
                                              scanf("%d", &tempMin);
                                              system("cls");
                                              b=1;
                                              
  
                            }
                            while(tempMin<-100);
                            b=0;  
                            if(inicial==0)
                            {
                 
                                          max=tempMax;
                                          strcpy(fechaMax,fecha);
                                          min=tempMin;
                                          strcpy(fechaMin,fecha);
                                          inicial=1;
                 
                             }  
   
                             if(tempMax>max)
                             {
                                            max=tempMax;
                                            strcpy(fechaMax,fecha);
                  
                  
                             }
                             else
                             {
                                            if(tempMin>max)
                                            {
                                                           max=tempMin;
                                                           strcpy(fechaMax,fecha);
                      
                                             }
                              }
   
   
   
                              if(tempMin<min)
                              {
                                             min=tempMin;
                                             strcpy(fechaMin,fecha);
                  
                              }
                              else
                              {
                                             if(tempMax<min)
                                             {
                                                            min=tempMax;
                                                            strcpy(fechaMin,fecha);
                      
                      
                                              }
       
                              }
   
                              do
                              {
                                              
                                              if(c==1)
                                              {
                                                            printf("ERROR, conteste esta pregunta con \"s\" para indicar si y con \"n\" para indicar no\nIntentelo nuevamente\n");
                                              }
       
                                              printf("Desea registrar otro dia (s/n)?\n");
                                              fflush(stdin);
                                              scanf("%c", &respuesta);
                                              respuesta=tolower(respuesta);
                                              system("cls");
                                              c=1;
       
                              }
                              while(!(respuesta=='s' || respuesta=='n'));
                              c=0;
                              cont++;                            
  }    
  if(cont==1)
  {               
                  printf("Solo se ingreso una temperatura por lo tanto\n el programa no puede realizar la comparacion\n\n\n\n");
   }
   else
   {
                  printf("Dia mas frio:     %s\tTemperatura:     %d grados C\n", fechaMin, min);
  
    
  
                  printf("Dia mas caluroso: %s\tTemperatura:     %d grados C\n\n\n\n",fechaMax, max);
  
              
   }
  
                    
  system("PAUSE");	
  return 0;
}
