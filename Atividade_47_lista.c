#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i, tamanho=10, x;
    int soma = 0,menos = 0,igual = 0;
    printf("Insira um n�mero X:");
    scanf("%d", &x);

    //aqui definimos os n�meros dentro dos indices do vetor e dentro do mesmo codigo comparamos cada indice adicionado ao usuario com o n�mero X//
    int v[tamanho];
    for(i=0;i<tamanho;i++)
    {
        printf("Insira um n�mero: ");
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

    printf("h� %d n�meros maiores, %d n�meros menores e %d n�meros iguais a %d", soma, menos, igual, x);
    return 0;
}