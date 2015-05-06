#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
    char resultDos;
    char resultTres;
    char multiploDos;
    char multiploTres;
    char multiploDosYTres;
    char i;
    char a;
    char b;
    
    SetConsoleTitle("Ejercicio 15");
    
    printf("Los multiplos de dos comprendidos entre 0 y 100 son:\n\n\n");
    for(i=0;i<=100;i++)
    {
                       
                       resultDos=i%2;
                       
                       if(resultDos==0)
                       {
                                       printf( "%d\t\t", i);
                                       
    
                       }     
                       
    }
    printf("\n\n");
    system("PAUSE");
    system("cls");
    
    
    printf("Los multiplos de tres comprendidos entre 0 y 100 son:\n\n\n");
    
    for(a=0;a<=100;a++)
    {
                        resultTres=a%3;
                        if(resultTres==0)
                        {
                                         printf("%d\t\t", a);
                                         
                                         
                                         
                        }
                        
    }
    printf("\n\n");
    system("PAUSE");
    system("cls");
    
    printf("Los multiplos de dos y de tres comprendidos entre 0 y 100 son:\n\n\n");
    
    for(b=0;b<=100;b++)
    {
                       resultDos=b%2;
                       resultTres=b%3;
                       
                       if(resultDos==0 && resultTres==0)
                       {
                                       printf("%d\n", b);
                                       
                                       
                       }
                       
    }
       
     printf("\n\n");                  
    
    system("PAUSE");
}
