#include <stdio.h>
#include <locale.h>
int main(){

    setlocale (LC_ALL, "");
    float fah;
    
    printf("Insira a temperatura em graus Fahrenheit :");
    scanf("%f",&fah);
    printf("A temperatura de Fahrenheit para Celsius é de :%f",(fah-32)*5/9);
}