#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho=10, x;
    int soma = 0,menos = 0,igual = 0;
    printf("Insira um número X:");
    scanf("%d", &x);

    //aqui definimos os números dentro dos indices do vetor e dentro do mesmo codigo comparamos cada indice adicionado ao usuario com o número X//
    int v[tamanho];
    for(i=0;i<tamanho;i++)
    {
        printf("Insira um número: ");
        scanf("%d", &v[i]);
        if (v[i] > x)
        { 
            soma++;
        }
        if(v[i] < x)
        {
            menos++;
        }    
        if(v[i] == x)
        {
            igual++;
        }
    }   

    printf("há %d números maiores, %d números menores e %d números iguais a %d", soma, menos, igual, x);
    return 0;
}