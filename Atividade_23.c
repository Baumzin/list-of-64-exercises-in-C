#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int op, n1, n2;

    printf("Escolha uma das opera��es abaixo :\n");
    printf("1- Adi��o\n");
    printf("2- Subtra��o\n");
    printf("3- Multiplica��o\n");
    printf("4- Divis�o\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Insira seu 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Insira seu 2� n�mero :\n");
        scanf("%d", &n2);
        printf("O resultado da adi��o � : %d\n", n1 + n2);
        break;
        case 2:
        printf("Insira seu 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Insira seu 2� n�mero :\n");
        scanf("%d", &n2);
        printf("O resultado da subtra��o � : %d\n", n1 - n2);
        break;
        case 3:
        printf("Insira seu 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Insira seu 2� n�mero :\n");
        scanf("%d", &n2);
        printf("O resultado da multiplica��o � : %d\n", n1 * n2);
        break;
        case 4:
        printf("Insira seu 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Insira seu 2� n�mero :\n");
        scanf("%d", &n2);
        printf("O resultado da divis�o � : %d\n", n1 / n2);
        break;
        default:
        printf("Op��o incorreta");
        break;
    }

    return 0;
}
