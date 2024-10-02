#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int a;

    printf("insira o número desejado :");
    scanf("%d",&a);

    if(a >= 0)
    {
        printf("Seu número é positivo :%d",a);
    }
    else
    {
        printf("Seu número é negativo :%d",a);
    }

    return 0;
}