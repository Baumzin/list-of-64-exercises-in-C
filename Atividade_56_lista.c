#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int max=7, v[max], i, par=0, mult=0;

    for(i=0; i<max; i++)
    {
        printf("Insira o elemento n�mero %d do vetor:", i+1);
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0)
        {
            par++;
        }
        if(v[i] % 5 == 0)
        {
            mult++;
        }
    }
    printf("Em todo o vetor h�:\n %d n�meros pares\n %d m�ltiplos de 5", par, mult);
}