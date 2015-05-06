#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char respuesta ='s';
    float altMax=0;
    char nombreMasAlto[21];
    char nombre[21];
    char apellido[21];
    float altura;
    
    SetConsoleTitle("Ejercicio 24");
           
           
           do
           {
                       printf("Ingrese nombre del alumno\n");
                       fflush(stdin);
                       scanf("%s",nombre);
                       system("cls");
                       
                       printf("Ingrese apellido del alumno\n");
                       fflush(stdin);
                       scanf("%s",apellido);
                       system("cls");
                       
                       printf("Ingrese altura del alumno\n");
                       fflush(stdin);
                       scanf("%f",&altura);
                       
                       if(altura>altMax)
                       {
                                                   altMax=altura;
                                                   strcpy(nombreMasAlto, nombre);
                                                   
                                                   
                       }
                       do
                       {
                                                   printf("Desea ingresar otro alumno(s/n)\n");
                                                   fflush(stdin);
                                                   scanf("%c",&respuesta);
                                                   respuesta=tolower(respuesta);
                                                   system("cls");
                                                   
                                                   if(respuesta!='s' && respuesta!='n')
                                                   {
                                                                      printf("ERROR, pulse \"s\" para indicar si y \"n\" para indicar no\n");
                                                   }
           
                          
                      }                
                      while(respuesta!='s' && respuesta!='n');
                      
            }          
            while(respuesta=='s');
            
                       
    printf("El alumno mas alto es %s ",nombreMasAlto);
    printf("y su altura es %.2f\n\n\n", altMax);
  
    system("PAUSE");	
    return 0;
}
