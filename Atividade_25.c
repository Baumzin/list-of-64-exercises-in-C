#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int op;
    double h;

    printf("Insira o seu sexo :");
    printf("\n1 - Homem\n2 - Mulher\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Insira sua altura em :");
        scanf("%lf", &h);
        printf("Seu peso ideal é de %.2lf", (72.7*h) - 58);
        break;
    case 2:
        printf("Insira sua altura em :");
        scanf("%lf", &h);
        printf("Seu peso ideal é de %.2lf kg", (62.1*h) - 44.7);
        break;
    default:
        printf("Sexo incorreto, insira um sexo válido");
        break;
    }
}   