#include <stdio.h>
#include <stdlib.h>


int validarS_N(void)
{
    int a=0;
    char resp;
    do
    {
                    if(a)
                         printf("ERROR,ingrese \"S\" para indicar si y \"N\"para indicar no.\nIntente nuevamente\n ");
                         
                         
                    printf("Desea ingresar otro numero?(s/n)\n");
                    fflush(stdin);
                    scanf("%c", &resp);
                    resp=tolower(resp);   
                    system("cls");  
                    
                    a=1;
                    
                          
                    
                    
    }
    while(resp!='s' && resp!='n');
    if (resp=='s')
       return 1;
    else
        return 0;

    
    
    
}
