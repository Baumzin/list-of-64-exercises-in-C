#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int op, n1, n2;

    printf("Escolha uma das op��es abaixo :\n");
    printf("1- Verificar se um dos n�meros lidos � ou n�o m�ltiplo um do outro\n");
    printf("2- Verificar se os dois n�meros lidos s�o pares\n");
    printf("3- Verificar se a m�dia de dois n�meros � maior ou igual a 7\n");
    printf("4- Sair\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Digite o 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Digite o 2� n�mero :\n");
        scanf("%d", &n2);
        if (n1 % n2 == 0 || n2 % n1 == 0)
        {
            printf("Os n�meros s�o m�ltiplos entre si\n");
        }
        else
        {
            printf("Os n�meros n�o s�o m�ltiplos entre si\n");
        }
        break;
    case 2:
        printf("Digite o 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Digite o 2� n�mero :\n");
        scanf("%d", &n2);
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            printf("Os dois n�meros s�o pares\n");
        }
        else
        {
            printf("Os dois n�meros n�o s�o pares\n");
        }
        break;
    case 3:
        printf("Digite o 1� n�mero :\n");
        scanf("%d", &n1);
        printf("Digite o 2� n�mero :\n");
        scanf("%d", &n2);
        if ((n1 + n2) / 2 >= 7)
        {
            printf("A m�dia dos dois n�meros � maior ou igual a 7\n");
        }
        else
        {
            printf("A m�dia dos dois n�meros � menor que 7\n");
        }
        break;
    case 4:
        do
        {
            printf("Voc� escolheu sair\n");
            op++;
        } while (op < 4);
        break;
    default:
        printf("Op��o inv�lida\n");
        break;
    }

}