#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int a,b;

    printf("Insira os 2 n�meros a serem comparados :");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("O n�mero %d � maior que %d",a,b);
        printf("\n O n�mero %d � menor que %d",b,a);
    }

    if (b>a)
    {
        printf("O n�mero %d � maior que %d",b,a);
        printf("\n O n�mero %d � menor que %d",a,b);
    }

    if(a == b)
    {
      printf("Ambos os n�meros s�o iguais");  
    }

    return 0;
}