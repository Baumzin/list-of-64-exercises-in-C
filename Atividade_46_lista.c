#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho;

    //aqui definimos o tamanho do vetor de x e y://
    printf("Digite o tamanho do vetor :");
    scanf("%d", &tamanho);

    int x[tamanho];
    int y[tamanho];

    //agora, fazemos o processo de armazenar os elementos dentro do vetor de x e y//

    for(i=0; i<tamanho; i++)
    {
        printf("Digite um número no vetor x:");
        scanf("%d", &x[i]);
    }

    for(i=0; i<tamanho; i++)
    {
        printf("Digite um número no vetor y:");
        scanf("%d", &y[i]);
    }

    //em seguida, criamos uma variável auxiliar para multiplicar os indices de cada vetor e colocamos em outro vetor//
    int soma=0;

    for(i=0; i<tamanho; i++)
    {
        soma+= x[i]*y[i];
    }
    //agora, para finalizarmos, somamos os indíces e mostramos ao usuário//
    printf("a soma da multiplicação dos vetores é de: %d", soma);

    return 0;

}