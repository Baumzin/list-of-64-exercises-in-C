#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int x;

    printf("Insira um n�mero inteiro para verificarmos seu m�dulo :");
    scanf("%d",&x);

    if(x>=0)
    {
        printf("O m�dulo do seu n�mero � : %d",x);
    }
    if(x<0)
    {
        x = x*(-1);
        printf("O m�dulo do seu n�mero � : %d",x);
    }

    return 0;
}