#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho = 5, soma = 0;
    int v1[tamanho], v2[tamanho];

    //dentro de um mesmo for, eu pe�o ao usuario digitar um n�mero para o vetor 1 e 2, e comparo os n�meros digitados e armazeno no soma//
    for(i=0; i<tamanho; i++)
    {
        printf("Digite um n�mero para o vetor 1: ");
        scanf("%d", &v1[i]);

        printf("Digite um n�mero para o vetor 2: ");
        scanf("%d", &v2[i]);

        if(v1[i] == v2[i])
            soma++;
    }
    printf("houve %d n�meros id�nticos nos mesmos �ndices", soma);

    return 0;

}