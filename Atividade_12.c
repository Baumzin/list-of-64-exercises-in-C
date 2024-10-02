#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int x;

    printf("Insira um número inteiro para verificarmos seu módulo :");
    scanf("%d",&x);

    if(x>=0)
    {
        printf("O módulo do seu número é : %d",x);
    }
    if(x<0)
    {
        x = x*(-1);
        printf("O módulo do seu número é : %d",x);
    }

    return 0;
}