#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int a,b,c,d;

    printf("insira seu primeiro número inteiro :");
    scanf("%i",&a);

    printf("insira seu segundo número inteiro :");
    scanf("%i",&b);

    printf("insira seu terceiro número inteiro :");
    scanf("%i",&c);

    printf("insira seu quarto número inteiro :");
    scanf("%i",&d);
    
    printf("\n%i + %i = %i",a,b,(a+b));
    printf("\n%i x %i = %i",a,b,(a*b));

    printf("\n%i + %i = %i",a,c,(a+c));
    printf("\n%i x %i = %i",a,c,(a*c));

    printf("\n%i + %i = %i",a,d,(a+d));
    printf("\n%i x %i = %i",a,d,(a*d));

    printf("\n%i + %i = %i",b,c,(b+c));
    printf("\n%i x %i = %i",b,c,(b*c));

    printf("\n%i + %i = %i",b,d,(b+d));
    printf("\n%i x %i = %i",b,d,(b*d));

    printf("\n%i + %i = %i",c,d,(c+d));
    printf("\n%i x %i = %i",c,d,(c*d));
}