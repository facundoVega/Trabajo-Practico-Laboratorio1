#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    char letra;
    char i;
    char contA=0; char contE=0; char contI=0; char contO=0;char contU=0;
    
    SetConsoleTitle("Ejercicio 8");
  
  for(i=1;i<21;i++)
  {
                   printf("Ingrese  caracter numero %d \n", i);
                   fflush(stdin);
                   scanf("%c", &letra);
                   letra=toupper(letra);
                   system("cls");
                   
                   switch(letra)
                   {
                                case 'A':
                                     contA++;
                                     break;
                                     
                                case 'E':
                                     contE++;
                                     break;
                                case 'I':
                                     contI++;
                                     break;
                                case 'O':
                                     contO++;
                                     break;
                                case 'U':
                                     contU++;
                                     break;
                   }
                   
 }
 
 printf("Se ingresaron %d a , %d e, %d i, %d o, y %d u\n\n", contA, contE, contI, contO, contU);
 system("PAUSE");	
 return 0;
}
