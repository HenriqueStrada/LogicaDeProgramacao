/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hora_atual = 20;
    int hora_cinema = 20;
    
    if(hora_atual > hora_cinema + 30){
        printf("Passou do horario do filme!");
    } else if (hora_atual < hora_cinema - 30) {
        printf("Nem abriu a porta do cinema!");
    } else {
        printf("Horario correto, pode entrar!");
    }
    
    return 0;
}
