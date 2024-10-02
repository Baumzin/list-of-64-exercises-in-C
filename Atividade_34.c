#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");

    int numero, menor, maior;

    printf("Digite um n�mero (negativo para encerrar): ");
    scanf("%d", &numero);

    if (numero < 0) 
    {
        printf("Nenhum n�mero v�lido foi inserido.\n");
        return 0;
    }

    menor = numero;
    maior = numero;

    while (1) 
    {
        printf("Digite outro n�mero (negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero < 0)
        {
            break;
        }

        if (numero > maior) 
        {
            maior = numero;
        } 
        else if (numero < menor) 
        {
            menor = numero;
        }
    }

    printf("\nO menor n�mero � %d e o maior n�mero � %d.\n", menor, maior);
    printf("\nObrigado por usar nosso programa!\n");
    return 0;
}