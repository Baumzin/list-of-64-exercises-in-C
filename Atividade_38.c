#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "");

    int c, n; 
    int e = 0;
    char conf;
    

    printf("\nInsira o c�digo do oper�rio: ");
    scanf("%d", &c);
    printf("\nInsira o n�mero de horas trabalhadas do oper�rio: ");
    scanf("%d", &n);

    if(n < 50)
    {
        n*=10;
    }
    else
    {
        if(n > 50)
        {
            e = (n - 50) * 20;
            n*=10;
        }
    }

    printf("\nSal�rio R$: %d\n", n);
    printf("Excedente R$: %d\n", e );
    printf("Deseja encerrar esse programa? \nS - Sim \nN - N�o\n ");
    scanf("%s", &conf);
    if(conf == 'S' || conf == 's')
    {
        printf("\nVoc� decidiu encerrar o programa!\n");
        return 0;
    }
    else
    {
        main();
    }

    return 0;
}
