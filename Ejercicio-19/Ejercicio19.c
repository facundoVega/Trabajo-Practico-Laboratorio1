#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



int main(int argc, char *argv[])
{
    float ventaVendedorUno;
    float gananciaVendedorUno=0;
    float ventaVendedorDos;
    float gananciaVendedorDos=0;
    float ventaVendedorTres;
    float gananciaVendedorTres=0;
    int numVendedor;
    float importe;
    int boletasACargar;
    float comision=0.05;
    
    SetConsoleTitle("Ejercicio 19");
    
    printf("Ingrese la cantidad de boletas a cargar\n");
    fflush(stdin);
    scanf("%d", &boletasACargar);
    while(boletasACargar!=1 && boletasACargar!=0)
    {
                           printf("ERROR, las boletas se cargan de a una.\n Ingrese \"1\" si quiere cargar una boleta o ingrese \"0\"si no quiere \ncargar ninguna\n");
                           fflush(stdin);
                           scanf("%d", &boletasACargar);
                           system("cls");
                           
                           
    }
    
    while(boletasACargar!=0)
    {
                            printf("Ingrese el numero del vendedor\n ");
                            fflush(stdin);
                            scanf("%d" , &numVendedor);
                            while(numVendedor<=0 || numVendedor>3)
                            {
                                                printf("ERROR,ya que la tienda tiene 3 empleados ingrese un valor de 1 a 3\n Ingrese nuevamente\n");
                                                fflush(stdin);
                                                scanf("%d", &numVendedor);
                                                system("cls");
                                                
                            }
                            
                            printf("Ingrese el importe de la venta\n");
                            fflush(stdin);
                            scanf("%f", &importe);
                            
                            if(numVendedor==1)
                            {                   ventaVendedorUno= importe*comision;
                                                gananciaVendedorUno= gananciaVendedorUno +ventaVendedorUno;
                                              
                            }
                            if(numVendedor==2)
                            {
                                              ventaVendedorDos= importe*comision;
                                              gananciaVendedorDos= gananciaVendedorDos+ventaVendedorDos;
                                              
                                              
                            }
                            if(numVendedor==3)
                            {
                                              ventaVendedorTres=importe*comision;
                                              gananciaVendedorTres=gananciaVendedorTres+ventaVendedorTres;
                                              
                                              
                            }
                            
                            printf("Cuantas boletas le quedan por cargar?\n");
                            fflush(stdin);
                            scanf("%d", &boletasACargar);
                            
                            while(boletasACargar!=1 && boletasACargar!=0)
                            {
                                                   printf("ERROR, las boletas se cargan de a una \nIngrese\"1\" si quiere cargar una boleta o ingrese \"0\" si no quiere \ncargar ninguna\n");
                                                   fflush(stdin);
                                                   scanf("%d", &boletasACargar);
                                                   system("cls");
                                                   
                                                   
                                                   
                            }
                            system("cls");
    }
    
                        printf("VENDEDOR  \t GANANCIA DEL DIA\nvendedor 1\t $%.2f\n", gananciaVendedorUno);
                        printf("vendedor 2\t $%.2f\n", gananciaVendedorDos);
                        printf("vendedor 3\t $%.2f\n\n", gananciaVendedorTres);
  
  system("PAUSE");	
  return 0;
}
