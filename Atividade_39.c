#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int n;
    char s;
        
    printf("\nDigite um número inteiro :");
    scanf("%d", &n);
    if(n >= 0)
    {
        if(n % 2 == 0)
        {
            printf("\no número %d é par e é positivo", n);
        }
        else
        {
            printf("\no número %d é ímpar mas é positivo", n);
        }
    }
    else
    {
        if(n % 2 == 0)
        {
            printf("\no número %d é par mas é negativo", n);
        }
        else
        {
            printf("\no número %d é ímpar e é negativo", n);
        }
    }
    printf("\nVocê deseja encerrar o programa? \nS - Sim\nN - Não\n");
    scanf("%s", &s);
    switch (s)
    {
    case 'S':
        printf("Você decidiu sair do programa!");
        return 0;
    break;
    case 's':
        printf("Você decidiu sair do programa!");
        return 0;
    break;
    case 'N':
        printf("Você decidiu continuar!\n");
        main();
    break;
    case 'n':
        printf("Você decidiu continuar!\n");
        main();
    break;
    default:
        
        printf("opção inválida, selecione alguma das opções dadas. . .\n");
        scanf("%s", &s);
        switch (s);
    break;
    }
    
    
}