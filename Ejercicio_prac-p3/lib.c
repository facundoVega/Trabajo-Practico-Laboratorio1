#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include "lib.h"




/*
 *inicializar un array de enteros a un valor especifico
 */
void inicializador_array_int(int vector[],int numero)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              vector[i]=numero;
                              
                              
                              
     }
     
     
     
     
}



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
    
    return numero;
    
    
    
}

/*pide un entero y valida que este dentro del ranfo que es pasado como parametro
/*retorna el valor ingresado ya validado.
/*recibe como parametros dos enteros que corresponden al rango de numeros donde tiene que estar el valir ingresado
/*y una cadena de caracteres que es el mensaje que se mostrara por pantalla para que se ingrese el valor.
*/

  int pedir_y_validar_entero(char mensaje[],int max,int min)
{
    int a=0;
    long int aux;
    
    do
    {
         if(a)
         {
              if(aux>max)
              {         
                         printf("Error,El valor de \" %s\" puede ser un valor hasta  %d \nIntente nuevamente\n",mensaje,max);
                         
              }
              else
              {
                  printf("ERROR,el valor de \"%s\" debe ser como minimo %d\nIntente nuevamente\n",mensaje,min);
              }
         }    
         aux=pedir_entero(mensaje);
         system("cls");
         a=1;
         
    }
    while(aux>max||aux<min);
    
    return aux;
    
    
    
    
}


/*valida que el numero entero pasado como parametro no coincida con ningun elemento del vector que tambien se recibe como parametro
/*retorna 1 si no hay coincidencia y retorna cero si la hay
*/


int validar_repeticion_entero(int num,int aux[])
{
    int i;
    int j;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(num==aux[i])
                             {
                                            break;
                                            
                                            
                             }
                             
                             
                             
    }
    if(i==SIZE_ARRAY)
    {
                     
                     for(j=0;j<SIZE_ARRAY;j++)
                     {
                                              if(aux[j]==-1)
                                              {
                                                            aux[j]=num;
                                                            return 1;
                                                            break;
                                                            
                                              }
                                              
                                              
                                              
                     }
    }                    
                     
    else
    {
        return 0;
        
        
        
    }
    
}






/* recibe el ingreso de una cadena por consola
/*El primer parametro que recibe es para mostrar un mensaje en pantalla en funcion del dato que se quiere obtener.
/*El segundo es donde se va a almacenar la cadena recibida.
*/

void pedir_cadena(char mensaje[],char vector[])
{
     
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     scanf("%s",vector);
     system("cls");
     
     
     
     
}


/*recibe el ingreseo de una cadena por consola
/*valida que la cantidad de caracteres ingresados no supere el limite para el dato
/*el primero char que recibe es para el mensaje que se mostrara en pantalla el segundo para almacenar la cadena recibida
/*y el entero es el limite maximo de carateres.
*/
void pedir_y_validar_cadena(char mensaje[],char vector[],int max)
{
     char a=0;
     char aux[500];
     
     do
     {
          if(a)
          {     
                printf("Se excedio el maximo de caracteres a ingresar \nIntente nuevamente\n");
               
          }
          pedir_cadena(mensaje,aux);
          a=1;
          
          
          
     }
     while(strlen(aux)>max||strlen(aux)<1);
     
     strcpy(vector,aux);
     
     
}



/*
/*pide y recibe un numero de tipo float por pantalla.
/*La cadena de caracteres recibida como parametro se mostrara en pantalla para indicar al ususario que valor debera ingresar
*/
float pedir_flotante(char mensaje[])
{
      float num;
      
      printf("Ingrese %s\n", mensaje);
      fflush(stdin);
      scanf("%f", &num);
      system("cls");
      
      return num;
      
      
      
      
}


/*pide y valida un numero flotante,valida que sea mayor al minimo recibido como parametro
/*tambien recibe  una cadena de caracteres que se mostrara en pantalla para indicar al usuario que es lo que debe ingresar
*/

float pedir_y_validar_flotante(char mensaje[],float min)
{
      int a=0;
      double aux;
      float num;
      
      do
      {
             if(a)
                  printf("ERROR,el monto debe ser mayor a $%.2f,Ingrese nuevamente\n");
                  
             aux=pedir_flotante(mensaje);
             a=1;
             
      }
      while(aux<min);
      num=aux;
      
      return num;
      
      
      
      
      
}



void mostrar_sectores()
{
     
     printf("\tSECTORES:\n\n\n");
     printf("\t1_CONTABILIDAD\n");
     printf("\t2_ADMINISTRACION\n");
     printf("\t3_COMPRAS\n");
     printf("\t4_VENTAS\n\n\n");
     
     printf("Elija e ingrese un numero correspondiente\n al sector que pertenece el  empleado\n");
     
     
     
     
     
     
     
}




/*valida que el numero ingresado pertenezca a uno de los sectores que muestra en pantalla
/*devuelve ese numero validado.
*/

int mostrar_y_validar_sectores()
{
    int a=0;
    long int sector;
    
    do
    {
         if(a)
              printf("ERROR,el numero ingresado no corresponde a un sector\nIntente nuevamente\n");
              
            mostrar_sectores();
            fflush(stdin);
            scanf("%d", &sector);
            system("cls");
            
            a=1;
    }
    while(sector<1 || sector>4);
    return sector; 
    
    
    
}





/*verifica si el array pasado como parametro tiene un valor distinto a 0
/*retorna 1 si tiene un valor distinto o 0 si no lo tiene.
*/
int hay_elemento(int vector[])
{
    int i;
    int a=0;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
          if(vector[i]!=0)
          {
                          a=1;
                          break;
                          
                          
                          
          }                   
                             
                             
                             
                             
    }
    return a;
    
    
    
    
    
}

/*
/*Muestra un mensaje en pantalla cuando la opcion seleccionada no esta disponible por falta de registros al programa.
*/

void mensaje_no_disponible()
{
     printf("No se ingresaron datos  al programa por lo tanto esta opcion no esta disponible\n\n\n");
     printf("ingrese cualquier tecla para volver al menu principal\n");
     getch();
     system("cls");
     
     
}


/*Muestra los elementos de los arrays pero solo las posiciones en las que el vector de enteros(en este caso "codigo")es distinto de cero.
*/

void mostrar_arrays(int legajo[],char nombre[][51],char apellido[][51],float salario[], int sector[],char fecha[][11])
{
     int i;
     printf("LEGAJO: NOMBRE: APELLIDO: SALARIO:  SECTOR:  FECHA:\n\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(legajo[i]!=0)
                              {
                                              printf("%d   %10s  %10s   $%.2f  %d   %10s\n", legajo[i],nombre[i],apellido[i],salario[i],sector[i],fecha[i]);
                                              
                                              
                              }
                              
                              
     }
     printf("\n\n\n");
     system("PAUSE");
     system("cls");
     
     
     
     
}




/*devuelve el  valor  total del vector de flotantes recibido como parametro.
/*contempla solo las posiciones del vector en las que el vector de enteros tiene valores distintos de ceros.
*/


float total_floats(float vector1[],int vector2[])
{
      int i;
      float total=0;
      
      for(i=0;i<SIZE_ARRAY;i++)
      {
                               if(vector2[i]!=0)
                               {
                                                
                                        total=total+vector1[i];        
                                                
                               }
                               
                               
                               
                               
      }
      
      return total;
      
}





/*obtiene el promedio de un vector de flotantes retorna ese promedio
/*contempla solo las posiciones del vector en las que el vector de enteros tiene valores distintos de ceros.
*/

float promediar(float vector[],float total,int vec[])
{
      float promedio;
      int i;
      int cont=0;
        
      for(i=0;i<SIZE_ARRAY;i++)
      {
                               if(vec[i]!=0)
                               {
                                            cont++;
                                            
                                            
                               }
                               
                               
      }     
      promedio=total/cont;
      
      return promedio;
      
}

/*
/*Inicializa un array de flotantes a un valor especifico
*/
void  inicializador_array_float(float vector[],float num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             vector[i]=num;
                             
                             
                             
                             
    }
    
    
    
    
    
}



/*cuenta la cantidad de elementos que tiene el array de floats mayores al valor pasado como parametro
/*devuelve esa cantidad
/*contempla solo las posiciones del vector en las que el vector de enteros tiene valores distintos de ceros.
*/

int mayores_promedio(float promedio,float vector1[],int vector2[])
{
    int i;
    int cont=0;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(vector2[i]!=0)
                             {
                                              if(promedio<vector1[i])
                                              {
                                                                     cont++;
                                                                     
                                                                     
                                              }
                                              
                             }
                             
                             
                             
    }
    
    
    return cont;
    
    
    
}



/*si el numero recibido como parametro coincide con uno almacenado en el vector la funcion devuelve la posicion donde se da la coincidencia
/*si no coincide devolvera -1.
*/

int existe_numero(int vector[],int numero)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             
                if(vector[i]==numero)
                {
                                     return i;
                                     
                                     
                                     
                }             
                             
                             
                             
    }
    return -1;
    
    
    
}

/*Muestra un menu correspondiete a "modificar"
*/
void mostrar_menu_modificar()
{
     
     printf("\tMENU DE MODIFICACIONES:\n\n\n");
     printf("\t1_NOMBRE\n");
     printf("\t2_APELLIDO\n");
     printf("\t3_SALARIO\n");
     printf("\t4_SECTOR\n");
     printf("\t5_FECHA DE INGRESO\n");
     printf("\t6_VOLVER AL MENU PRINCIPAL\n\n\n");
     
     printf("Elija e ingrese un numero correspondiente\n al dato que desea modificar\n");
     
     
     
     
     
     
     
}




/*muestra el menu y valida que la opcion ingresada corresponda a una de las disponibles para el menu.
*/ 

int mostrar_y_validar_menu_modificar()
{
    int a=0;
    long int auxOpcion;
    int opcion;
    
    do
    {
         if(a)
              printf("ERROR,el numero ingresado no corresponde  a una opcion disponible del menu modificar\nIntente nuevamente\n");
              
         mostrar_menu_modificar();
         fflush(stdin);
         scanf("%d", &auxOpcion);
         system("cls");
         
         a=1;
    }
    while(auxOpcion>6||auxOpcion<1);
    opcion=auxOpcion;
    
    return opcion;
    
    
    
    
}






/*ordena arrays paralelos con parametro especifico.
*/
void ordenar_arrays_alfabeticamente(int legajo[],char nombre[][51],char apellido[][51],float salario[],int sector[],char fecha[][11])
{
     int i;
     int j;
     int auxLegajo;
     char auxNombre[51];
     char auxApellido[51];
     float auxSalario;
     int auxSector;
     char auxFecha[11];
     
     for(i=0;i<SIZE_ARRAY-1;i++)
     {
                                for(j=i+1;j<SIZE_ARRAY;j++)
                                {
                                                           if(strcmp(nombre[i],nombre[j])>0)
                                                           {
                                                                                      auxLegajo=legajo[i];
                                                                                      legajo[i]=legajo[j];
                                                                                      legajo[j]=auxLegajo;
                                                                                      
                                                                                      strcpy(auxNombre,nombre[i]);
                                                                                      strcpy(nombre[i],nombre[j]);
                                                                                      strcpy(nombre[j],auxNombre);
                                                                                      
                                                                                      strcpy(auxApellido,apellido[i]);
                                                                                      strcpy(apellido[i],apellido[j]);
                                                                                      strcpy(apellido[j],auxApellido);
                                                                                      
                                                                                      strcpy(auxFecha,fecha[i]);
                                                                                      strcpy(fecha[i],fecha[j]);
                                                                                      strcpy(fecha[j],auxFecha);
                                                                                      
                                                                                      auxSalario=salario[i];
                                                                                      salario[i]=salario[j];
                                                                                      salario[j]=auxSalario;
                                                                                      
                                                                                      auxSector=sector[i];
                                                                                      sector[i]=sector[j];
                                                                                      sector[j]=auxSector;


                                                          }
                                                                                      
                                }
                                                           
                                                           
                                                           
                                
                                
                                
                                
     }     
     
}
/*
/*muestra los valores del vector segun un numero de sector especifico que es recibido como parametro("int numero").
/*contempla solo las posiciones del vector en las que el vector de enteros tiene valores distintos de ceros.
*/

void mostrar_por_seccion(int legajo[],char nombre[][51],char apellido[][51],float salario[],int sector[],char fecha[][11],char mensaje[],int numero)
{
     int i;
     int bandera=0;
     
     printf("%d_%s:\n\n\n",numero,mensaje);
     
     printf("LEGAJO: NOMBRE: APELLIDO: SALARIO: FECHA:\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(legajo[i]!=0 && sector[i]==numero)
                              {
                                              printf("%d    %10s   %10s  $%.2f  %10s\n",legajo[i],nombre[i],apellido[i],salario[i],fecha[i]);
                                              bandera=1;
                                              
                              }
                              
                              
                              
     
     }
     if(bandera)
     
                printf("\n\n\n");
                
     
     else
                printf("\n\nNo hay empleados registrados en este sector\n\n\n");
     
     
     system("PAUSE");
     system("cls");
}




