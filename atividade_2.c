#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "");

    float cotacao,valor,reais;
    
    printf("insira a cotacao atual do dólar :");
    scanf("%f",&cotacao);

    printf("coloque o valor desejado em dólar :");
    scanf("%f",&valor);

    reais=(valor*cotacao);
    printf("Este é o seu valor em reais :%f", reais);
}