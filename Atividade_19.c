#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    float a,b,c;

    printf("insira o valor dos 3 lados de seu triï¿½ngulo :");
    scanf("%f %f %f",&a,&b,&c);

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        if((a==b) && (b==c))
        {
            printf("Seu triângulo é equilátero");
        }

        else if((a==b)||(a==c)||(b==c))
        {
            printf("Seu triângulo é isósceles");
        }

        else
        {
            printf("Seu triângulo é escaleno");
        }
    }

    else
    {
        printf("os lados fornecidos não correspondem ao de um triângulo");
    }   

    return 0;
}