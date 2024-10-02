#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");

    int numero, menor, maior;

    printf("Digite um número (negativo para encerrar): ");
    scanf("%d", &numero);

    if (numero < 0) 
    {
        printf("Nenhum número válido foi inserido.\n");
        return 0;
    }

    menor = numero;
    maior = numero;

    while (1) 
    {
        printf("Digite outro número (negativo para encerrar): ");
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

    printf("\nO menor número é %d e o maior número é %d.\n", menor, maior);
    printf("\nObrigado por usar nosso programa!\n");
    return 0;
}