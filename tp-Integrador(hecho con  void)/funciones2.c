#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include "funciones2.h"


 /*pide un entero por pantalla
 *recibe una cadena que es el dato que se mostrara en pantalle para recibir el valor
 *retorna el numero ingresado.
 */
int pedir_entero(char mensaje[])
{
    long int numero;
    
    printf("ingrese %s \n", mensaje);
    fflush(stdin);
    scanf("%d", &numero);
    system("cls");
    return numero;
    
    
    
}


/*Muestra un mensaje por pantalla ,luego espera recibir un caracter,valida que ese caracter sea 
/*"s" o "n",Retorna el caracter validado.
*/
char preguntar_y_validar(char preg[])
{
     char resp;
     int a=0;
     
     do
     {
         if(a)
              printf("ERROR,conteste con \"S\" para indicar si y con \"N\" para indicar no\nIntente nuevamente\n");
     
          printf("%s\?\n",preg);
          fflush(stdin);
          scanf("%c", &resp);
          system("cls");
          
          a=1;
          resp=tolower(resp);
     
     }
     while(resp!='s'&&resp!='n');
     
     
     return resp;
     
     
     

}
