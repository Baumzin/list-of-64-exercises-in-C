#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x;

    printf("Insira um número inteiro entre 0 e 9 :");
    scanf("%d",&x);

    if(x<9 && x>0)
    {
        printf("Valor válido");
    }
    else
    {
        printf("Valor inválido");
    }

    return 0;
}