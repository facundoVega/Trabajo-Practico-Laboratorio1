#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main(int argc, char *argv[])
{
  const int cantNotas=6;
  float acumuladorNotas=0;
  float nota;
  float promedio;
  char respuesta='s';
  char nombre[21];
  char i;
  char nomMax[21];
  float promedioMax=0.0;
  int contAlumnos=0;
  char nombreMateria[20];
  char a=0;
  char lengua[]="lengua";
  char matematicas[]="matematicas";
  char ingles[]="ingles";
  char computacion[]="computacion";
  char sociales[]="sociales";
  char naturales[]="naturales";
  char quimica[]="quimica";
  char fisica[]="fisica";
  char contIngles=0;
   
  char b=0;
  
  
  SetConsoleTitle("Ejercicio 25");
  
  do
  {
       printf("Ingrese nombre del alumno\n");
       fflush(stdin);
       scanf("%s", nombre);
       
       
       
       printf("\n\n\nLISTA DE MATERIAS:\nLengua\nIngles\nMatematicas\nSociales\nNaturales\nComputacion\nQuimica\nFisica\n\n\n\n");
       
       for(i=1;i<=6;i++)
       {
                        
                        
                        do
                        {
                              if(a)
                              {
                                   printf("ERROR, el nombre de la materia tiene que pertenecer\n a la lista de materias \nIntente nuevamente\n\n");
                                   printf("\n\nLISTA DE MATERIAS:\nLengua\nIngles\nMatematicas\nSociales\nNaturales\nComputacion\nQuimica\nFisica\n\n");
                              }                                                                                  
                              printf("Ingrese el nombre de la materia\n");
                              fflush(stdin);
                              scanf("%s", nombreMateria);
                              strlwr(nombreMateria);
                              
                              system("cls");
                        
                              a=1;                                                                
                                                                                              
                        }
                        while((strncmp(nombreMateria,lengua,6)!=0 || strlen(nombreMateria)>6) && (strncmp(nombreMateria,ingles,6)!=0 || strlen(nombreMateria)>6) && (strncmp(nombreMateria,matematicas,11)!=0 || strlen(nombreMateria)>11) && (strncmp(nombreMateria,sociales,8)!=0 || strlen(nombreMateria)>8) && (strncmp(naturales,nombreMateria,9)!=0 || strlen(nombreMateria)>9)&&(strncmp(computacion,nombreMateria,11)!=0||strlen(nombreMateria)>11)&&(strncmp(quimica,nombreMateria,7)!=0||strlen(nombreMateria)>7)&&(strncmp(nombreMateria,fisica,6)!=0||strlen(nombreMateria)>6));
                        a=0;
                       
       
                        
                        
                       do
                       {
                              printf("Ingrese nota  del alumno en %s\n",nombreMateria );
                              fflush(stdin);
                              scanf("%f",&nota);
                              system("cls");
                              
                              if(nota<1 || nota>10)
                              {
                                        printf("ERROR, la nota debe estar comprendida entre 1 y 10\n");
                                        
                                        
                              }
                              
                       }
                       while(nota<1 || nota>10);
                       acumuladorNotas=acumuladorNotas+nota;
                       
                       promedio=acumuladorNotas/cantNotas;
                       
       
                       
                       
                       
       }
       if(promedio>promedioMax)
       {
                               promedioMax=promedio;
                               strcpy(nomMax,nombre);
                               
       }
       
       printf("NOMBRE DEL ALUMNO:%s\t", nombre);
       printf("PROMEDIO: %.2f\n\n\n", promedio);
       
       
       do
       {
                       printf("Desea ingresar otro alumno(s/n)?\n");
                       fflush(stdin);
                       scanf("%c",&respuesta);
                       system("cls");
                       respuesta=tolower(respuesta);
                       
                       if(!(respuesta=='s' || respuesta=='n'))
                                          printf("ERROR, pulse\"s\" para indicar si y \"n\" para indicar no\n");
       }
       while(respuesta!='s'&&respuesta!='n');

        acumuladorNotas=0;
        contAlumnos++;
  }     
  while(respuesta=='s');    
                   
  if(contAlumnos==1)   
  {
                       printf("solo se registro un alumno, por lo tanto el programa\n no puede realizar la comparacion para saber el mejor promedio\n\n\n");
                    
  }                  
  else
  {                  
                    printf("El alumno de mejor promedio es : %s  y su promedio:%.1f\n\n",nomMax, promedioMax);      
       
                    
  }    
       
  system("PAUSE");	
  return 0;
}
