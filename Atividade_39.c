#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int n;
    char s;
        
    printf("\nDigite um n�mero inteiro :");
    scanf("%d", &n);
    if(n >= 0)
    {
        if(n % 2 == 0)
        {
            printf("\no n�mero %d � par e � positivo", n);
        }
        else
        {
            printf("\no n�mero %d � �mpar mas � positivo", n);
        }
    }
    else
    {
        if(n % 2 == 0)
        {
            printf("\no n�mero %d � par mas � negativo", n);
        }
        else
        {
            printf("\no n�mero %d � �mpar e � negativo", n);
        }
    }
    printf("\nVoc� deseja encerrar o programa? \nS - Sim\nN - N�o\n");
    scanf("%s", &s);
    switch (s)
    {
    case 'S':
        printf("Voc� decidiu sair do programa!");
        return 0;
    break;
    case 's':
        printf("Voc� decidiu sair do programa!");
        return 0;
    break;
    case 'N':
        printf("Voc� decidiu continuar!\n");
        main();
    break;
    case 'n':
        printf("Voc� decidiu continuar!\n");
        main();
    break;
    default:
        
        printf("op��o inv�lida, selecione alguma das op��es dadas. . .\n");
        scanf("%s", &s);
        switch (s);
    break;
    }
    
    
}