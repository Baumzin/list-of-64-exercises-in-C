#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, max; 
    float soma=0;

    printf("insira a quantidade de n�meros que ser�o lidos:");
    scanf("%d", &max);

    int v[max];

    for(i=0; i<max; i++)
    {
        printf("insira o %d� n�mero:", i+1);
        scanf("%d", &v[i]);

        soma+=v[i];
    }
    printf("A m�dia dos n�meros digitados � igual  a: %.2f\n",soma/max);

    return 0;
}