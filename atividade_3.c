#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    float p,co;
    char n;
    int c,q;

    printf("Insira o nome do vendedor :");
    scanf("%s",&n);

    printf("Insira o c�digo da pec�a vendida :");
    scanf("%d",&c);

    printf("Insira o valor da pe�a vendida :R$");
    scanf("%f",&p);

    printf("Insira a quantidade de pe�as vendidas :");
    scanf("%d",&q);
    co=(p*q*0.05);

    printf("A comiss�o desse vendedor ser� de :R$%f",co);

    return 0;
}