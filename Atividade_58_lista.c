#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, max; 
    float soma=0;

    printf("insira a quantidade de números que serão lidos:");
    scanf("%d", &max);

    int v[max];

    for(i=0; i<max; i++)
    {
        printf("insira o %dº número:", i+1);
        scanf("%d", &v[i]);

        soma+=v[i];
    }
    printf("A média dos números digitados é igual  a: %.2f\n",soma/max);

    return 0;
}