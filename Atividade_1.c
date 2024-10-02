#include <stdio.h>
#include <locale.h>
main(){

    setlocale (LC_ALL, "");
    float a,b,r;
    printf("Escreva seu estoque mínimo :");

    scanf("%f",&a);
    printf("Escreva seu estoque máximo :");

    scanf("%f",&b);
    r=(a+b)/2;
    printf("Seu estoque médio será de :%f",r);
}