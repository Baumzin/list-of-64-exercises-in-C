#include <stdio.h>
#include <locale.h>
int main(){

    setlocale (LC_ALL, "Portuguese_Brazil");
    int a,m,d;
    printf("Insira a sua idade em anos :");
    scanf("%d",&a);

    printf("Insira a sua idade em meses :");
    scanf("%d",&m);

    printf("Insira agora sua idade em dias :");
    scanf("%d",&d);

    printf("A sua idade em dias será de :%i",(a*365)+(m*30)+d);

    return 0;
}