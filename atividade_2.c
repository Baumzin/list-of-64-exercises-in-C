#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "");

    float cotacao,valor,reais;
    
    printf("insira a cotacao atual do d�lar :");
    scanf("%f",&cotacao);

    printf("coloque o valor desejado em d�lar :");
    scanf("%f",&valor);

    reais=(valor*cotacao);
    printf("Este � o seu valor em reais :%f", reais);
}