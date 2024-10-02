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
        printf("O número %d é maior que %d",a,b);
        printf("\n O número %d é menor que %d",b,a);
    }

    if (b>a)
    {
        printf("O número %d é maior que %d",b,a);
        printf("\n O número %d é menor que %d",a,b);
    }

    if(a == b)
    {
      printf("Ambos os números são iguais");  
    }

    return 0;
}