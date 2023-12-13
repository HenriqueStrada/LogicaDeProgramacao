/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;
    
    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("Show de bola %s ...Qual a sua idade? \n", nome);
    scanf("%d",&idade);
    printf("Qual seu sobrenome? \n");
    scanf("%s", sobrenome);
    printf("Por ultimo, em que ano você nasceu? \n");
    scanf("%d",&ano_nascimento);
    
    printf("Perfeito %s %s ... voce tem %d anos e nasceu no ano de %d!",nome,sobrenome,idade,ano_nascimento);
    return 0;
}
