#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x;

    printf("Insira um n�mero inteiro entre 0 e 9 :");
    scanf("%d",&x);

    if(x<9 && x>0)
    {
        printf("Valor v�lido");
    }
    else
    {
        printf("Valor inv�lido");
    }

    return 0;
}