#include <stdio.h>
#include <locale.h>
main(){

    setlocale (LC_ALL, "");
    float cel;
    
    printf("Insira a temperatura em graus Celsius :");
    scanf("%f",&cel);
    printf("A temperatura de Celsius para Fahrenheit é de :%f",(9*cel+160)/5);
}