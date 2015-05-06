#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char i;
    char apellido[21];
    char nombre[21];
    float puntosInteligencia;
    float puntosCultura;
    float puntosBelleza;
    float puntajeGral;
    float maxPuntajeGral=0;
    char nombreMaxPuntaje[21];
    char apellidoMaxPuntaje[21];
    float acumuladoCultura=0;
    float acumuladoBelleza=0;
    float acumuladoInteligencia=0;
    
    
    
    
    SetConsoleTitle("Ejercicio 27");
    
    for(i=1;i<=20;i++)
    {
                      printf("Ingrese nombre de la participante numero %d\n", i);
                      fflush(stdin);-
                      scanf("%s", nombre);
                      
                      printf("Ingrese apellido de la participante\n");
                      fflush(stdin);
                      scanf("%s", apellido);
                      system("cls");
                                  
                      printf("Ingrese puntos por inteligencia\n");
                      fflush(stdin);
                      scanf("%f", &puntosInteligencia);
                      acumuladoInteligencia=acumuladoInteligencia+puntosInteligencia;
                      
                      printf("Ingrese puntos por cultura general\n");
                      fflush(stdin);
                      scanf("%f", &puntosCultura);
                      system("cls");
                      acumuladoCultura=acumuladoCultura+puntosCultura;
                      
                      printf("Ingrese puntos por belleza\n");
                      fflush(stdin);
                      scanf("%f", &puntosBelleza);
                      system("cls");
                      acumuladoBelleza=acumuladoBelleza+puntosBelleza;
                      
                      puntajeGral= puntosInteligencia+puntosCultura+puntosBelleza;
                      
                      if(puntajeGral>maxPuntajeGral)
                      {
                                                    maxPuntajeGral=puntajeGral;
                                                    strcpy(nombreMaxPuntaje,nombre);
                                                    strcpy(apellidoMaxPuntaje,apellido);
                                                    
                      }
    }
    
    
    
    printf("Apellido y nombre de la concursante de mayor puntaje:%s %s\n\n\n",apellidoMaxPuntaje, nombreMaxPuntaje);
    printf("Puntaje acumulado en Cultura Gral: %.2f\n",acumuladoCultura);
    printf("puntaje acumulado en inteligencia: %.2f\n", acumuladoInteligencia);
    printf("Puntaje acumulado en Belleza: %.2f\n\n\n", acumuladoBelleza);
    
    if(acumuladoCultura<acumuladoInteligencia && acumuladoCultura<acumuladoBelleza)
    {
                                              printf("El menor puntaje total de los items fue el de cultura general\n");
                                              
    }
    if(acumuladoBelleza<acumuladoCultura && acumuladoBelleza<acumuladoInteligencia)
                                         printf("El menor puntaje de los tres items fue el de Belleza\n");
                                         
                                         
    if(acumuladoInteligencia<acumuladoCultura && acumuladoInteligencia<acumuladoBelleza )
                                              printf("El menor puntaje de los tres items fue el de Inteligencia\n");
                                              
    if(acumuladoInteligencia==acumuladoCultura && acumuladoInteligencia==acumuladoBelleza)
    
                                               printf("De las tres categorias de puntajes no hay menor  por que los tres items tienen el mismo puntaje\n");
     
  system("PAUSE");	
  return 0;
}
