#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho;

    //pe�o ao usu�rio definir a quantidade de elementos do vetor, e em seguida eu pe�o ao usu�rio definir cada elemento e armazeno no vetor//
    printf("Digite um n�mero :");
    scanf("%d", &tamanho);

    int v[tamanho];

    for(i=0; i<tamanho; i++)
    {
        printf("Digite um n�mero :");
        scanf("%d", &v[i]);
    }

    //aqui exibimos os n�meros dos vetores na ordem inversa://
    for(i=tamanho-1; i>=0; i--)
    {
        printf("\n%d", v[i]);
    }

    return 0;
}