#include <stdio.h>
#include <locale.h>
int main(){

    setlocale (LC_ALL, "");
    float r,a;

    printf("Insira a altura de sua lata de �leo : ");
    scanf("%f",&a);

    printf("Agora, coloque o valor do raio de sua lata :");
    scanf("%f",&r);

    printf("O volume da sua lata de �leo � de :%f",(3.14159*r*r*a));

    return 0;
}