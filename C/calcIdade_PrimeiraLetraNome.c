/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    char nome[256];
    int idade;
    
    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("Show de bola %s ...Qual a sua idade? \n", nome);
    scanf("%d",&idade);
    
    printf("Perfeito %s ...Voce tem %d anos! \n",nome,idade);
    
    printf("A primeira letra do seu nome é: %c \n",nome[0]);
        
    if(idade <= 12){
        printf("%s, Voce e uma crianca!",nome);
    } else if (idade < 18){
        printf("%s, Voce e um adolescente!",nome);
    } else if (idade >= 18){
        printf("%s, Voce e um adulto!",nome);
    }
 
    return 0;
}
