#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "");
    int n1, n2, op, op2;

    printf("\nEscolha uma das 4 operações a seguir:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            printf("O resultado da adição é: %d\n", n1 + n2);
            printf("Deseja voltar ao menu?:\n 1- Sim\n 2- Não\n");
                scanf("%d", &op2);
                switch (op2)
                {
                    case 1:
                        main();
                    break;
                    case 2:
                        printf("\nObrigado por usar nossa calculadora!\n");
                        return 0;
                    break;
                
                    default:
                        printf("\nOpção inválida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
        break;
        case 2:
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            printf("O resultado da subtração é: %d\n", n1 - n2);
            printf("Deseja voltar ao menu?:\n 1- Sim\n 2- Não\n");
                scanf("%d", &op2);
                switch (op2)
                {
                    case 1:
                        main();
                    break;
                    case 2:
                        printf("\nObrigado por usar nossa calculadora!\n");
                        return 0;
                    break;
                
                    default:
                        printf("\nOpção inválida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
        break;
        case 3:
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            printf("O resultado da multiplicação é: %d\n", n1 * n2);
            printf("Deseja voltar ao menu?:\n 1- Sim\n 2- Não\n");
                scanf("%d", &op2);
                switch (op2)
                {
                    case 1:
                        main();
                    break;
                    case 2:
                        printf("\nObrigado por usar nossa calculadora!\n");
                        return 0;
                    break;
                
                    default:
                        printf("\nOpção inválida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
        case 4:
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            if (n2 != 0)
            {
                printf("O resultado da divisão é: %d\n", n1 / n2);
                printf("Deseja voltar ao menu?:\n 1- Sim\n 2- Não\n");
                scanf("%d", &op2);
                switch (op2)
                {
                    case 1:
                        main();
                    break;
                    case 2:
                        printf("\nObrigado por usar nossa calculadora!\n");
                        return 0;
                    break;
                
                    default:
                        printf("\nOpção inválida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
            }
            else
            {
                printf("Erro! Divisão por zero não é permitida.\n");
            }
        break;
        default:
            printf("Opção inválida.\n");
        break;
    }

    return 0;
}