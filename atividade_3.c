#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    float p,co;
    char n;
    int c,q;

    printf("Insira o nome do vendedor :");
    scanf("%s",&n);

    printf("Insira o código da pecça vendida :");
    scanf("%d",&c);

    printf("Insira o valor da peça vendida :R$");
    scanf("%f",&p);

    printf("Insira a quantidade de peças vendidas :");
    scanf("%d",&q);
    co=(p*q*0.05);

    printf("A comissão desse vendedor será de :R$%f",co);

    return 0;
}