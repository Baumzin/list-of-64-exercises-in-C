#include<stdio.h>
#include<locale.h>
#include <math.h>

float base(){
    setlocale(LC_ALL, "");
    float b;
    printf("Insira a base do triangulo:");
    scanf("%f", &b);
    return b;
}
float altura(){
    setlocale(LC_ALL, "");
    float h;
    printf("Insira a altura do triangulo:");
    scanf("%f", &h);
    return h;
}
float area(float b, float h){
    int a;
    a = (b * h) / 2;
    return a;
}
float hipotenusa(float b, float h){
    float hip;
    hip = sqrt((b*b)+(h*h));
    return hip;
}
int main(){
    float b, h, a, hip;
    b = base();
    h = altura();
    a = area(b, h);
    hip = hipotenusa(b, h);
    printf("A �rea do tri�ngulo �: %.2f\nA hipotenusa do tri�ngulo �: %.2f", a, hip);
}
