#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho = 5, soma = 0;
    int v1[tamanho], v2[tamanho];

    //dentro de um mesmo for, eu peço ao usuario digitar um número para o vetor 1 e 2, e comparo os números digitados e armazeno no soma//
    for(i=0; i<tamanho; i++)
    {
        printf("Digite um número para o vetor 1: ");
        scanf("%d", &v1[i]);

        printf("Digite um número para o vetor 2: ");
        scanf("%d", &v2[i]);

        if(v1[i] == v2[i])
            soma++;
    }
    printf("houve %d números idênticos nos mesmos índices", soma);

    return 0;

}