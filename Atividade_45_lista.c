#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho;

    //peço ao usuário definir a quantidade de elementos do vetor, e em seguida eu peço ao usuário definir cada elemento e armazeno no vetor//
    printf("Digite um número :");
    scanf("%d", &tamanho);

    int v[tamanho];

    for(i=0; i<tamanho; i++)
    {
        printf("Digite um número :");
        scanf("%d", &v[i]);
    }

    //aqui exibimos os números dos vetores na ordem inversa://
    for(i=tamanho-1; i>=0; i--)
    {
        printf("\n%d", v[i]);
    }

    return 0;
}