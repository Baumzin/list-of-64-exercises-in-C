#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "");
    int n1, n2, op, op2;

    printf("\nEscolha uma das 4 opera��es a seguir:\n");
    printf("1 - Adi��o\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &n1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &n2);
            printf("O resultado da adi��o �: %d\n", n1 + n2);
            printf("Deseja voltar ao menu?:\n 1- Sim\n 2- N�o\n");
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
                        printf("\nOp��o inv�lida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
        break;
        case 2:
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &n1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &n2);
            printf("O resultado da subtra��o �: %d\n", n1 - n2);
            printf("Deseja voltar ao menu?:\n 1- Sim\n 2- N�o\n");
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
                        printf("\nOp��o inv�lida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
        break;
        case 3:
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &n1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &n2);
            printf("O resultado da multiplica��o �: %d\n", n1 * n2);
            printf("Deseja voltar ao menu?:\n 1- Sim\n 2- N�o\n");
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
                        printf("\nOp��o inv�lida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
        case 4:
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &n1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &n2);
            if (n2 != 0)
            {
                printf("O resultado da divis�o �: %d\n", n1 / n2);
                printf("Deseja voltar ao menu?:\n 1- Sim\n 2- N�o\n");
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
                        printf("\nOp��o inv�lida, iremos desligar nosso servidor!\n");
                        return 0;
                    break;
                }
            }
            else
            {
                printf("Erro! Divis�o por zero n�o � permitida.\n");
            }
        break;
        default:
            printf("Op��o inv�lida.\n");
        break;
    }

    return 0;
}