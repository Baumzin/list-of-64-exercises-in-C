#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    float a,b,c;

    printf("insira o valor dos 3 lados de seu tri�ngulo :");
    scanf("%f %f %f",&a,&b,&c);

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        if((a==b) && (b==c))
        {
            printf("Seu tri�ngulo � equil�tero");
        }

        else if((a==b)||(a==c)||(b==c))
        {
            printf("Seu tri�ngulo � is�sceles");
        }

        else
        {
            printf("Seu tri�ngulo � escaleno");
        }
    }

    else
    {
        printf("os lados fornecidos n�o correspondem ao de um tri�ngulo");
    }   

    return 0;
}