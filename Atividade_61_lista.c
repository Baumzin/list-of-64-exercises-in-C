#include<stdio.h>
#include<locale.h>

float salario()
{
    float s;
    printf("Digite o sálario do funcionário:");
    scanf("%f", &s);

    return s;
}
float indice(){
    float i;
    printf("Insira o índice de reajuste:");
    scanf("%f", &i);

    return i;
}
float reajuste(float s, float i){
    float r;
    {
        r = s + (s * i) / 100;
    }
    return r;
}
int main(){
    float s, r, i;
    s = salario();
    i = indice();
    r = reajuste(s, i);
    printf("Salário reajustado: R$%.2f\n", r);

    return 0;
}