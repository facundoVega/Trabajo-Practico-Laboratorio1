#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


int main(int argc, char *argv[])
{
    char nombre[21];
    int numeroSocio;
    char apellido[21];
    int edad;
    int deporte;
    int contTenis=0;
    int contRugby=0;
    int contVoley=0;
    int contHockey=0;
    int contFutbol=0;
    int acumulTenis=0;
    int acumulVoley=0;
    int acumulRugby=0;
    int acumulFutbol=0;
    int acumulHockey=0;
    float promedioTenis=0;
    float promedioRugby=0;
    float promedioVoley=0;
    float promedioHockey=0;
    float promedioFutbol=0;
    char respuesta='s';
    char a=0;
    
    SetConsoleTitle("Ejercicio 32");
    
    while(respuesta=='s')
    {
                         printf("Ingrese numero de socio\n");
                         fflush(stdin);
                         scanf("%d", &numeroSocio);
                         system("cls");
                         
                         printf("Ingrese apellido del socio\n");
                         fflush(stdin);
                         scanf("%s", apellido);
                         system("cls");
                         
                         printf("Ingrese nombre\n");
                         fflush(stdin);
                         scanf("%s", nombre);
                         system("cls");
                         
                         printf("Ingrese edad del socio\n");
                         fflush(stdin);
                         scanf("%d", &edad);
                         system("cls");
                         
                         do
                         {
                                       if(a==1)
                                       {
                                               printf("ERROR, ingrese un numero del 1 al 5 para elegir deporte \nIntente nuevamente\n");
                                       }
                         
                                       printf("Ingrese un numero correspondiente al deporte que practica el socio\n \"1\"Tenis, \"2\"Rugby, \"3\"Voley \"4\"hockey\"5\"futbol\n");
                                       fflush(stdin);
                                       scanf("%d", &deporte);
                                       system("cls");
                                       
                                       a=1;
                                       
                         }
                         while(deporte>5||deporte<1);                                  
                         a=0;
                         
                         switch(deporte)
                         {
                                        case 1:
                                             contTenis++;
                                             acumulTenis=acumulTenis+edad;
                                             break;
                                             
                                        case 2:
                                             contRugby++;
                                             acumulRugby=acumulRugby+edad;
                                             break;
                                             
                                        case 3:
                                             contVoley++;
                                             acumulVoley=acumulVoley+edad;
                                             break;
                                             
                                        case 4:
                                             contHockey++;
                                             acumulHockey=acumulHockey+edad;
                                             break;
                                             
                                        case 5:
                                             contFutbol++;
                                             acumulFutbol=acumulFutbol+edad;
                                             break;
                                             
                         }    
                         
                         do
                         {
                              if(a)
                                   printf("ERROR,ingrese\"s\"para indicar SI y \"n\"para indicar NO\nIntentelo nuevamente\n");
                              
                              printf("Desea registrar otro socio(s/n)\n");
                              fflush(stdin);
                              scanf("%c", &respuesta);
                              system("cls");
                              
                              a=1;
                              
                         }    
                         while(!(respuesta=='s' || respuesta=='n'));
                         a=0;                                              
                                             
    }
    promedioHockey= (float)acumulHockey/contHockey;
    promedioTenis=(float)acumulTenis/contTenis;
    promedioRugby=(float)acumulRugby/contRugby;
    promedioVoley=(float)acumulVoley/contVoley;
    promedioFutbol=(float)acumulFutbol/contFutbol;
    
    printf("Cantidad de socios que practican tenis:  %d\n", contTenis);
    printf("Cantidad de socios que practican rugby: %d\n\n\n", contRugby);
    
    printf("promedio de edad de socios que practican tenis   :%f\n",promedioTenis);
    printf("Promedio de edad de socios que practican rugby   :%f\n",promedioRugby);
    printf("Promedio de edad de socios que practican voley   :%f\n",promedioVoley);
    printf("Promedio de edad de socios que practican hockey  :%f\n",promedioHockey);
    printf("Promedio de edad de socios que practican futbol  :%f\n\n",promedioFutbol);
       
                                                            
                                                                 
  
    system("PAUSE");	
    return 0;
}
