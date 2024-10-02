#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int a,b;

    printf("Insira os 2 números a serem comparados :");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("A diferença entre %d e %d é :%d",a,b,a-b);
    }

    if (b>a)
    {
        printf("A difereça entre %d e %d é :%d",b,a,b-a);
    }

    if(a == b)
    {
      printf("Não há diferença pois ambos são iguais");  
    }


    return 0;
}
