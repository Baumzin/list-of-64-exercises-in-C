#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int op, n1, n2;

    printf("Escolha uma das opções abaixo :\n");
    printf("1- Verificar se um dos números lidos é ou não múltiplo um do outro\n");
    printf("2- Verificar se os dois números lidos são pares\n");
    printf("3- Verificar se a média de dois números é maior ou igual a 7\n");
    printf("4- Sair\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Digite o 1º número :\n");
        scanf("%d", &n1);
        printf("Digite o 2º número :\n");
        scanf("%d", &n2);
        if (n1 % n2 == 0 || n2 % n1 == 0)
        {
            printf("Os números são múltiplos entre si\n");
        }
        else
        {
            printf("Os números não são múltiplos entre si\n");
        }
        break;
    case 2:
        printf("Digite o 1º número :\n");
        scanf("%d", &n1);
        printf("Digite o 2º número :\n");
        scanf("%d", &n2);
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            printf("Os dois números são pares\n");
        }
        else
        {
            printf("Os dois números não são pares\n");
        }
        break;
    case 3:
        printf("Digite o 1º número :\n");
        scanf("%d", &n1);
        printf("Digite o 2º número :\n");
        scanf("%d", &n2);
        if ((n1 + n2) / 2 >= 7)
        {
            printf("A média dos dois números é maior ou igual a 7\n");
        }
        else
        {
            printf("A média dos dois números é menor que 7\n");
        }
        break;
    case 4:
        do
        {
            printf("Você escolheu sair\n");
            op++;
        } while (op < 4);
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

}