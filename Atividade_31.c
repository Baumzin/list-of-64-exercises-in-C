#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int par=0;
    int impar=0;

    printf("Insira até 5 números positivos para vermos quantos números são pares e quantos são í­mpares :\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    
    if(n1 % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }

    if(n2 % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }

    if(n3 % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }

     if(n4 % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }

     if(n5 % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }

    printf("Existem %d números pares e %d números ímpares.", par, impar);

    return 0;
    
}