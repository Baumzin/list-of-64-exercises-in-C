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

    printf("Insira at� 5 n�meros positivos para vermos quantos n�meros s�o pares e quantos s�o �mpares :\n");
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

    printf("Existem %d n�meros pares e %d n�meros �mpares.", par, impar);

    return 0;
    
}