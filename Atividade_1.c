#include <stdio.h>
#include <locale.h>
main(){

    setlocale (LC_ALL, "");
    float a,b,r;
    printf("Escreva seu estoque m�nimo :");

    scanf("%f",&a);
    printf("Escreva seu estoque m�ximo :");

    scanf("%f",&b);
    r=(a+b)/2;
    printf("Seu estoque m�dio ser� de :%f",r);
}