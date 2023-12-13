/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    int contador = 1;
    int contador_dois = 10;
    while(contador <= 10){
        while(contador_dois >= contador){
            printf("Ola mundo! %d \n", contador_dois);
            printf("------------- \n");
            contador_dois--;
        }
        printf("------------- \n");
        printf("Ola mundo! %d \n", contador);
        contador++;
    }
    return 0;
}
