#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include "funciones2.h"



/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_INGRESAR NUMEROS\n");
        printf("\t2_MOSTRAR\n");
        printf("\t3_SALIR\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
}


int mostrar_y_validar_menu()
{
    int a=0;
    int opcion;
    
    do
    {
        if(a)
             printf("ERROR,el numero ingresado no pertenece a una opcion valida para el menu\nIntente nuevamente\n\n");
             

             mostrar_menu();
             fflush(stdin);
             scanf("%d", &opcion);
             system("cls");
        
             a=1;
        
    }
    while(opcion<1||opcion>3);
    
    return opcion;
    
    
    
}


void ingresar(ArrayList* self)
{
     char resp='s';
     int aux;
     
     
     while(resp=='s')
     {
     
     
                     aux=pedir_entero("Ingrese un numero");
     
                     self->add(self, &aux);
                     
                     resp=preguntar_y_validar("desea ingresar otro num(s/n)");
     
     }
     
     
}

/*******************************************************/
/*     ESTA FUNCION ME DEVUELVE SIEMPRE EL MISMO VALOR */
/*******************************************************/
void mostrar(ArrayList* self)
{
     int i;
     ArrayList* p;
     
     
     
     for(i=0;i<self->size;i++)
     {
                              p=self->Get(self,i);
                              
                              
                              printf("%d\n",**(int *)self->pElements);
                              
                              
                              
                              
                              
     }
     
     
     
     
     
}

