#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int a;

    printf("insira o n�mero desejado :");
    scanf("%d",&a);

    if(a >= 0)
    {
        printf("Seu n�mero � positivo :%d",a);
    }
    else
    {
        printf("Seu n�mero � negativo :%d",a);
    }

    return 0;
}