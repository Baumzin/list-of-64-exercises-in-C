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
        printf("A diferen�a entre %d e %d � :%d",a,b,a-b);
    }

    if (b>a)
    {
        printf("A difere�a entre %d e %d � :%d",b,a,b-a);
    }

    if(a == b)
    {
      printf("N�o h� diferen�a pois ambos s�o iguais");  
    }


    return 0;
}
