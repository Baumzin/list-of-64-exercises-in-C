#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int op, n1, n2;

    printf("Escolha uma das operações abaixo :\n");
    printf("1- Adição\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Insira seu 1º número :\n");
        scanf("%d", &n1);
        printf("Insira seu 2º número :\n");
        scanf("%d", &n2);
        printf("O resultado da adição é : %d\n", n1 + n2);
        break;
        case 2:
        printf("Insira seu 1º número :\n");
        scanf("%d", &n1);
        printf("Insira seu 2º número :\n");
        scanf("%d", &n2);
        printf("O resultado da subtração é : %d\n", n1 - n2);
        break;
        case 3:
        printf("Insira seu 1º número :\n");
        scanf("%d", &n1);
        printf("Insira seu 2º número :\n");
        scanf("%d", &n2);
        printf("O resultado da multiplicação é : %d\n", n1 * n2);
        break;
        case 4:
        printf("Insira seu 1º número :\n");
        scanf("%d", &n1);
        printf("Insira seu 2º número :\n");
        scanf("%d", &n2);
        printf("O resultado da divisão é : %d\n", n1 / n2);
        break;
        default:
        printf("Opção incorreta");
        break;
    }

    return 0;
}
