#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "");

    char letra1, letra2; 

    printf("Insira uma letra do alfabeto entre A e Z: ");
    scanf("%c", &letra1);

    fflush(stdin);
    
    printf("Insira uma outra letra do alfabeto entre A e Z: ");
    scanf("%c", &letra2);

    if(letra2-letra1<0)
    {
        printf("Não está em ordem alfabética\nERROR ERROR ERROR ERROR ERROR");
    }
    else
    {
        printf("A distância entre as letras %c e %c é:%d",letra1, letra2, (letra2-letra1)-1);
    }

    return 0;
}